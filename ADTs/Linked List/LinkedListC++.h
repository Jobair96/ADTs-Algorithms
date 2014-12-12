#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/**

This is an implementation of a simple linked list class in C++ I made by myself. 

*/

#include "Node.h"
#include <cassert>

template<class T> class LinkedList
{
public:
	Node<T>* mFirst;

	//Operations
	LinkedList();
	bool isEmpty();
	bool has(T data);
	void insert(T data);
	void printList();
	virtual ~LinkedList();
};

//Insert a node to the front of the list
template <class T> LinkedList<T>::LinkedList()
{
	mFirst = nullptr;
}

//Check to see if the linked list is empty
template <class T> bool LinkedList<T>::isEmpty()
{
	return nullptr == mFirst;
}

//Inserts a node at the front of the list
template <class T> void LinkedList<T>::insert(T data)
{
	Node<T>* newNode = new Node<T>(data);

	newNode->next = mFirst;

	mFirst = newNode;
}

//Finding if a certain node has the specified data in a linked list.
template<class T> bool LinkedList<T>::has(T data)
{
	assert(!isEmpty());
	Node<T>* temp = mFirst;

	while (nullptr != temp)
	{
		if (temp->mData == data)
		{
			return true;
		}

		temp = temp->next;
	}

	return false;
}

//Printing the contents of the list
template<class T> void LinkedList<T>::printList()
{
	assert(!isEmpty());
	Node<T>* temp = mFirst;

	while (nullptr != temp)
	{
		std::cout << temp->mData << std::endl;
		temp = temp->next;	
	}
}

//Deleting the linked list.
template<class T> LinkedList<T>::~LinkedList()
{
	while (nullptr != mFirst)
	{
		Node<T>* temp = mFirst;
		mFirst = mFirst->next;
		delete temp;
		temp = nullptr;
		
	}

}

#endif /* LINKEDLIST_H */
