package com.jobair.dataStructures;

class Node<T>
{
	private T data; // Will only be read-only

	Node <T> next;

	Node (T data)
	{
		this.data = data;
	}

	T getData()
	{
		return data;
	}
}