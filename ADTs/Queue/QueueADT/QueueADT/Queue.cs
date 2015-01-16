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
        private Node<T> first;
        private Node<T> last;

        public Queue()
        {
            first = null;
            last = null;
        }

        public bool isEmpty()
        {
            return null == first;
        }

        public void enqueue(T data)
        {
            Node<T> newNode = new Node<T>(data);

            if(null == first)
            {
                last = newNode;
                first = last;
            }

            else
            {
                last.next = newNode;
                last = newNode;
            }
        }

        public T dequeue()
        {
            Debug.Assert(!isEmpty());

            T item = first.Data;
            first = first.next;
            return item;
        }

        public void nuke()
        {
            Debug.Assert(!isEmpty());

            while (null != first)
            {
                Node<T> temp = first;
                first = first.next;
                temp = null;
            }
        }
    }
}
