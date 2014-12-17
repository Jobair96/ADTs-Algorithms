#ifndef NODE_H
#define NODE_H

/**

  This file contains the definition of the node structure that will be utilized in the linked list, stack, queue, and BST data structures.

 */

#include <stdio.h>

typedef struct Node Node;

struct Node {

	// Pointer to the next node in the list.
	Node *next;

	int data;
};

#endif
