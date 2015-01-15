/**
 * 
 */
package com.jobair.dataStructures;

import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;

import java.util.ArrayList;

import org.junit.Before;
import org.junit.Test;

/**
 * @author jobair
 *
 */
public class StackTest {

	/**
	 * @throws java.lang.Exception
	 */
	@Before
	public void setUp() throws Exception {
	}

	/**
	 * Test method for {@link com.jobair.dataStructures.Stack#Stack()}.
	 * This method will not be used as currently there is no logic in the constructor. Therefore, it is needless 
	 * to test anything. In the future, however, we may need to.
	 */
	@Test
	public void testStack() {

	}

	/**
	 * Test method for {@link com.jobair.dataStructures.Stack#isEmpty()}.
	 */
	@Test
	public void testIsEmpty() {
		Stack<Integer> stack_1 = new Stack<Integer>();
		Stack<String> stack_2 = new Stack<String>();
		Stack<Boolean> stack_3 = new Stack<Boolean>();
		Stack<Stack<ArrayList<Integer>>> stack_4 = new Stack<Stack<ArrayList<Integer>>>();
		assertTrue(stack_1.isEmpty());
		assertTrue(stack_2.isEmpty());
		assertTrue(stack_3.isEmpty());
		assertFalse(stack_4.isEmpty());
	}

	/**
	 * Test method for {@link com.jobair.dataStructures.Stack#peek()}.
	 */
	@Test
	public void testPeek() {
		fail("Not yet implemented");
	}

	/**
	 * Test method for {@link com.jobair.dataStructures.Stack#push(java.lang.Object)}.
	 */
	@Test
	public void testPush() {
		fail("Not yet implemented");
	}

	/**
	 * Test method for {@link com.jobair.dataStructures.Stack#pop()}.
	 */
	@Test
	public void testPop() {
		fail("Not yet implemented");
	}

	/**
	 * Test method for {@link com.jobair.dataStructures.Stack#nuke()}.
	 */
	@Test
	public void testNuke() {
		fail("Not yet implemented");
	}

}
