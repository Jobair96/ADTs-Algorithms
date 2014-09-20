#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/**

This is my implementaion of a linked list in C. Because C does not have reference paramters,
I have decided to use a pointer to a pointer to implement this linked list.

*/

#include <stdbool.h>
#include <stdlib.h>
#include <assert.h>
#include "Node.h"


void init(struct Node** root)
{
	*root = NULL;
}

bool isEmpty(struct Node** root)
{
	return NULL == *root;
}

//Inserts a node at the front of the list.
void insert(struct Node** root, int data)
{
	struct Node* newNode = malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = *root;
	*root = newNode;
}

//Checks if the linked list has a node with a specific piece of data.
bool has(struct Node** root, int data)
{

	assert(!isEmpty(root));


	struct Node* temp = *root;
	while (NULL != temp)
	{

		if (temp->data == data)
		{
			return true;
		}

		temp = temp->next;
	}

	return false;
}

//Prints the content of the linked list.
void printList(struct Node** root)
{
	assert(!isEmpty(root));


	struct Node* temp= *root;
	while (NULL != temp)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}

}

//Deletes the node that has the data specified.
void delete(struct Node** root, int data)
{
	assert(has(root, data));
	struct Node* temp = *root;
	if ((temp)->data == data)
	{
		*root = (*root)->next;
		free(temp);
		return;
	}

	while (NULL != temp->next)
	{
		if (temp->next->data == data)
		{
			break;
		}

		temp = temp->next;
	}

	
	if (NULL == temp->next)
	{
		free(temp);
		temp = NULL;
	}

	else
	{
		struct Node* toDelete = temp->next;
		temp->next = temp->next->next;
		free(toDelete);
	}
}

void nuke(struct Node** root)
{
	while (NULL != *root)
	{
		struct Node* temp = *root;
		*root = (*root)->next;
		free(temp);
	}
}

#endif /* LINKEDLIST_H */