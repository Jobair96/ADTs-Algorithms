package com.jobair.dataStructures;

public class Main {

	public static void main (String args[])
	{
		Stack<Integer> test = new Stack<Integer>();
		test.push(1);
		test.push(7);
		test.push(-5);
	
		
		System.out.println(test.peek());
		System.out.println(test.peek());
		System.out.println(test.peek());
		test.push(9);
		System.out.println(test.peek());
		System.out.println(test.isEmpty());
		test.nuke();
		System.out.println(test.isEmpty());

		
	}
}
