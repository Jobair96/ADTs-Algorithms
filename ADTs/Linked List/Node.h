/**

This file contains the definition of the node structure that will be utilized in the linked list, stack, queue, and BST data structures.

*/

#include <stdio.h>


typedef struct
{
	// Pointer to the next node in the list.
	struct Node* next;

	int data;
} Node;
