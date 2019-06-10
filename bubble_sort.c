// Sort a array using Bubble sort Algorithm

// Author: Siddhartha Sadhukhan

#include<stdio.h>
#include<stdbool.h>

int main()
{
	int array[5];
	int i, j;
	bool flag=false; 
	
	printf("Enter the element of the array: \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	
	// Swapping adjacent element, left most element should be the smallest element
	
	for(i=0; i<5;i++)
	{
		for(j = 4 ; j > i ; j--)
		{
			if(array[i] > array[j])
			{
				array[j]= array[i] + array[j];
				array[i] = array[j] - array[i];
				array[j]= array[j] - array[i];
				flag=true;  
			}
		}
		// After a complete iteration of inner loop if no swapping happens then we can declare the array as sorted array this is more adaptive approch than selection sort
		if(!flag)
		{
			break;
		}
	}
	
	
	printf("Sorted Array:");
	
	for(i=0;i<5;i++)
	{
		printf("%3d", array[i]);
	}

	getch();
	
}
