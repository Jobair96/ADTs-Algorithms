#ifndef NODE_H
#define NODE_H

#include <iostream>

template <typename T> class Node
{
	private:
		T data;
		int snum;

	public:
		Node* next;

		Node(T data);
		T getData() const;
};

template <typename T>
Node<T>::Node(T data) : data(data)
{

}

template<typename T> 
T Node<T>::getData() const
{
	return data;
}

#endif /* NODE_H */
