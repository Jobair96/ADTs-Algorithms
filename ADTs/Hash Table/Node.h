#ifndef NODE_H
#define NODE_H

template <class T> class Node
{
private:
	T mData;
	int snum;

public:
	Node* next;

	Node(T data) : mData(data) {}
	T getData() const
	{
		return mData;
	}
};

template <typename T>
Node<T>::Node(T data) : mData(data)
{

}

template<typename T> 
T Node<T>::getData() const
{
	return mData;
}

#endif /* NODE_H */