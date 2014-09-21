using System;

namespace Data_Structures
{
    internal class Node<T>
    {
        private T mData;
        public Node<T> next;

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
