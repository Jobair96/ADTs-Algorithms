/* This class uses a Linked List to implement a Stack. Each individual element is an instance of 
 * the Node class
 */

package com.jobair.dataStructures;

public class Stack<T>
{// Implementing a stack with a linked list.

	private Node<T> first;
	private Node<T> last;

	public Stack()
	{
		first = null;
		last = null;
	}
	
	public boolean isEmpty()
	{
		return null == first;
	}
	
	
	public T peek()
	{
		assert(!isEmpty());

		return last.getData();
	}
	
	public void push(T data)
	{
		Node<T> newNode = new Node<T>(data);

		if(null == first)
		{
			last = newNode;
			first = last;
		}

		else
		{
			last.next = newNode;
			last = newNode;
		}
	}
	
	public T pop()
	{
		assert(!isEmpty());

		Node<T> temp = first;

		if(null == temp.next)
		{
			first = null;
			last = null;
			return temp.getData();
		}

		while(null != temp.next.next)
		{
			temp = temp.next;
		}
		
		Node<T> toPop = temp.next;
		temp.next = null;
		last = temp;

		return toPop.getData();
	}
	
	public void nuke()
	{
		assert(!isEmpty());
		
		while(null != first)
		{
			@SuppressWarnings("unused")
			Node<T> temp = first;
			first = first.next;
			temp = null;
		}
	}
	
	
}
