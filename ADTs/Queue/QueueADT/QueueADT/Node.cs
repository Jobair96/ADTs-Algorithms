/** This is the generic Node data structure which will be used for the Queue data structure. */

using System;

namespace Data_Structures {

    public class Node<T> {

        // Reference to the next Node in the list. If there is no next node, next should be null.
        public Node<T> next;

        // Cxr
        public Node(T data) {
            Data = data;
        }

        public T Data { get; private set; }
    }

}
