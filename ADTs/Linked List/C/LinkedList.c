#ifndef LINKED_LIST_H
#define LINKED_LIST_H

/** Implementation of the linked list. We basically have a pointer to the head Node, and then 
    pointer to the pointer which points to the head node. This is done so we can change the position
    of the head Node without having to return any Node*. This is done because C does not allow reference 
    parameters, unlike C++. */

#include "LinkedList.h"
#include <stdlib.h>
#include <assert.h>

void initList(Node** root) {

	*root = NULL;
}

bool isEmpty(Node** root) {

	// List is empty if the root does not exist
	return NULL == *root;
}

void insert(Node** root, int data) {

	Node* newNode = malloc(sizeof(Node));
	newNode->data = data;

	// This adds the Node to the front of the list
	newNode->next = *root;
	*root = newNode;
}

bool has(Node** root, int data) {

	assert(!isEmpty(root));

	Node* temp = *root;

	// Traverse through list to see if any Node has the data we are looking for.
	while (NULL != temp) {

		if (temp->data == data) {

			return true;
		}

		temp = temp->next;
	}

	return false;
}

void printList(Node** root) {

	assert(!isEmpty(root));

	Node* temp= *root;

	// Traverse through list and print each Node
	while (NULL != temp) {

		printf("%d\n", temp->data);
		temp = temp->next;
	}
}

void deleteNode(Node** root, int data) {

	// Make sure the list actually has the data
	assert(has(root, data));

	// This is a special case if we end up deleting the first element of the list
	Node* temp = *root;

	if ((temp)->data == data) {

		*root = (*root)->next;
		free(temp);
		return;
	}

	// Else, the node we want to delete is after the first node.
	// This loop will make temp point to the Node right before the node we wish to delete.
	// This makes it easier to repair any dangling pointers afterwards.
	while (NULL != temp->next) {

		if (temp->next->data == data) {

			break;
		}

		temp = temp->next;
	}

	// This is for if the node we wish to delete is the last element of the list
	if (NULL == temp->next) {

		free(temp);
		temp = NULL;
	} else {

		Node* toDelete = temp->next;
		temp->next = temp->next->next;
		free(toDelete);
	}
}

void nuke(Node** root)
{
	while (NULL != *root)
	{
		// This temp points to the root, then we move the root to point to the next element.
		// This is because we cannot delete the root then move on to the next element,
		// so we delete temp instead, after moving root to point to the next.

		Node* temp = *root;
		*root = (*root)->next;
		free(temp);
	}
}

#endif /* LINKED_LIST_H */
