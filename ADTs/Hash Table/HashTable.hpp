#ifndef HASHTABLE_H
#define HASHTABLE_H

///*
//	This file implements a HashTable using C++ vectors. It uses the open hashing with chaining method.
//	*/

#include <vector>
#include <string>
#include "Node.h"

template<typename T>
class HashTable
{
private:
	std::vector<Node<T>> *table;
	int hash(int key) const;

public:
	HashTable(int size);
	void insert(std::string name, int snum);
	bool lookup(int snum) const;
	void remove(int snum);
	void print() const; // For debugging
	virtual ~HashTable();


};

template<typename T>
HashTable<T>::void insert(T data)
{

}

#endif