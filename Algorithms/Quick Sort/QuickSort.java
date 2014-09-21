/**
 * Name: Jobair Hassan
 * Date: May 23, 2014
 * Description: Implementing the quicksort recursive algorithm in Java.
 */

package com.jobair.algorithms.quickSort;

 
class QuickSort 
{
	private int[] numbers;
	private int number;
	
	public void sort(int[] array)
	{
		if(array.length <= 1 || array == null)
		{
			return;
		}
		
		this.numbers = array;
		this.number = array.length - 1;
		quickSort(0, number);
		
	}
	
	private void quickSort(int low, int high)
	{
		int pivot = this.numbers[(low + high) / 2];
		int i = low;
		int j = high;
		while(i <= j)
		{
			while(numbers[i] < pivot)
			{
				i++;
			}
			
			while(numbers[j] > pivot)
			{
				j--;
			}
			
			if(i <= j)
			{
				swap(i, j);
				i++;
				j--;
			}
			
		}
		
		if( i < high)
		{
			quickSort(i, high);
		}
		
		if(j > low)
		{
			quickSort(low, j);
		}
		
	}
	
	private void swap(int k, int m)
	{
		int temp = this.numbers[k];
		this.numbers[k] = this.numbers[m];
		this.numbers[m] = temp;
	}
	
}
