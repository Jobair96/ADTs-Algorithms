#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/**

This is my the interface of my linked list in C. Because C does not have reference paramters,
I have decided to use a pointer to a pointer to implement this linked list. This will allow the functions
to change the passed in list without having to return a new Node each time. This Linked List is allocated on the heap by default.

*/

#include "Node.h"
#include <stdbool.h>

// This takes a Node and builds a linked list from it.
void initList(Node** root);

// This checks if the linked list is empty, based on its root.
bool isEmpty(Node** root);

// Inserts a node at the front of the list.
void insertNode(Node** root, int data);

// Checks if the linked list has a node with a specific piece of data.
bool hasNode(Node** root, int data);

// Prints the content of the linked list. This is mainly used for debugging.
void printList(Node** root);

// Deletes the node that has the data specified.
// Please note that if a list has multiple elements that are the same, only the first 
// instance of that element will be deleted.
void deleteNode(Node** root, int data);

// Will delete the entire list if it has been allocated on the heap. 
void nuke(Node** root);

#endif /* LINKEDLIST_H */
