/**
 * Implementing a generic Queue as a Linked List. This uses the Node.cs class to build the list.
 */

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Diagnostics;

namespace Data_Structures
{

    public class Queue<T>  
    {
        private Node<T> mFirst;
        private Node<T> mLast;

        public Queue()
        {
            mFirst = null;
            mLast = null;
        }

        public bool isEmpty()
        {
            return null == mFirst;
        }

        public void enqueue(T data)
        {
            Node<T> newNode = new Node<T>(data);
            if(null == mFirst)
            {
                mLast = newNode;
                mFirst = mLast;
            }

            else
            {
                mLast.next = newNode;
                mLast = newNode;
            }
        }

        public T dequeue()
        {
            Debug.Assert(!isEmpty());

            if(null != mFirst)
            {
                T item = mFirst.getData();
                mFirst = mFirst.next;
                return item;
            }

            return default(T);
        }

        public void nuke()
        {
            Debug.Assert(!isEmpty());

            while (null != mFirst)
            {
                Node<T> temp = mFirst;
                mFirst = mFirst.next;
                temp = null;
            }
        }
    }
}
