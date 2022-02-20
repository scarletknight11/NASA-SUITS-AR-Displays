﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Linq;
using System.Collections.Concurrent;

namespace Microsoft.Azure.RemoteRendering
{
    public partial class Entity
    {
        /// <summary>
        ///  Result code used by the VisitEntityDelegate to signal if the visitor should continue to traverse the scenegraph or not.
        /// </summary>
        public enum VisitorResult
        {
            /// Continue traversing the scenegraph.
            ContinueVisit,

            /// Stop traversing the scenegraph and exit the call to VisitEntity.
            ExitVisit
        }

        /// <summary>
        /// Delegate used to visit an entity hierarchy inclusive of its children.
        /// </summary>
        /// <param name="entity">The current entity being visited.</param>
        /// <returns>Code to either continue traversing the scenegraph or to exit the call to Visit.</returns>
        public delegate VisitorResult VisitEntityDelegate(Entity entity);

        /// <summary>
        /// Delegate used to search an entity hierarchy for an entity inclusive of its children.
        /// </summary>
        /// <param name="entity">The current entity in the hierarchy being queried.</param>
        /// <returns>True if the entity has been found, otherwise false.</returns>
        public delegate bool EntitySearchDelegate(Entity entity);

        /// <summary>
        /// Find a component of a type on this Entity.
        /// </summary>
        /// <returns>The component if found, otherwise null</returns>
        public COMPTYPE FindComponentOfType<COMPTYPE>() where COMPTYPE : ComponentBase
        {
            var components = Components;
            return components.FirstOrDefault(comp => comp is COMPTYPE) as COMPTYPE;
        }

        /// <summary>
        /// Visit this entity and any children in a depth first traversal until every node is visited
        /// or until the visitor returns VisitorResult.ExitVisit
        /// </summary>
        public void VisitEntity(VisitEntityDelegate visitor)
        {
            VisitEntityImpl(visitor);
        }

        /// <summary>
        /// Find first entity in this entity's hierarchy (inclusive of itself) that fulfills pred.  Search
        /// is performed in a depth first order.
        /// </summary>
        public Entity FindFirstEntity(EntitySearchDelegate pred)
        {
            if (pred(this))
            {
                return this;
            }

            var children = Children;
            foreach (var child in Children)
            {
                Entity res = child.FindFirstEntity(pred);
                if (res != null)
                {
                    return res;
                }
            }

            return null;
        }

        private VisitorResult VisitEntityImpl(VisitEntityDelegate visitor)
        {
            if (visitor(this) == VisitorResult.ExitVisit)
            {
                return VisitorResult.ExitVisit;
            }

            var children = Children;
            foreach (var child in Children)
            {
                if (child.VisitEntityImpl(visitor) == VisitorResult.ExitVisit)
                {
                    return VisitorResult.ExitVisit;
                }
            }

            return VisitorResult.ContinueVisit;
        }
    }
}
