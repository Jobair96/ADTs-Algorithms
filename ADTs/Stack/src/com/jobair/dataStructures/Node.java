package com.jobair.dataStructures;

class Node<T>
{
	private T mData;

	Node <T> next;

	Node (T data)
	{
		mData = data;
	}

	T getData()
	{
		return mData;
	}
}