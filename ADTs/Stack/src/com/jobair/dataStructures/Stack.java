package com.jobair.dataStructures;

public class Stack<T>
{// Implementing a stack with a linked list.

	private Node<T> mFirst;
	private Node<T> mLast;

	public Stack()
	{
		mFirst = null;
		mLast = null;
	}
	
	public boolean isEmpty()
	{
		return null == mFirst;
	}
	
	
	public T peek()
	{
		assert(!isEmpty());
		return mLast.getData();
	}
	
	public void push(T data)
	{
			
		Node<T> newNode = new Node<T>(data);
		if(null == mFirst)
		{
			mLast = newNode;
			mFirst = mLast;
		}

		else
		{
			mLast.next = newNode;
			mLast = newNode;
		}
	}
	
	public Node<T> pop()
	{
		assert(!isEmpty());

		Node<T> temp = mFirst;
		if(null == temp.next)
		{
			mFirst = null;
			mLast = null;
			return null;
		}

		while(null != temp.next.next)
		{
			temp = temp.next;
		}
		
		Node<T> toReturn = temp.next;
		temp.next = null;
		mLast = temp;

		return toReturn;
	}
	
	public void nuke()
	{
		assert(!isEmpty());
		
		while(null != mFirst)
		{
			@SuppressWarnings("unused")
			Node<T> temp = mFirst;
			mFirst = mFirst.next;
			temp = null;
		}
	}
	
	
}
