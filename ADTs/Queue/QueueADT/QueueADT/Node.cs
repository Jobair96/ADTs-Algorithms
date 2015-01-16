/** This is the generic Node data structure which will be used for the Queue data structure. */

using System;

namespace Data_Structures
{
    // We will not use this class outside this project; therefore, it is internal.
    internal class Node<T>
    {
        private T mData;

        // Pointer to the next Node in the list. If there is no next node, next should be null.
        public Node<T> next;

        // Cxr
        public Node(T data)
        {
            mData = data;
        }

        public T getData()
        {
            return mData;
        }
    }
}
