// Sort an array using Insertion sort Algorithn

#include<stdio.h>

int main()
{
	int array[5];
	int i, j;
	
	
	printf("Enter the series of number of the array: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	
	// Insert element into sorted array to the right position[ It is better than selection sort and also than bubble sort]
	// Traverse [i] to the previous of last element
	for(i=0;i<4;i++)
	{
		for(j=i+1; j > 0; j--)
		{
			if(array[j] < array[j-1])
			{
				array[j] = array[j] + array[j-1];
				array[j-1] = array[j] - array[j-1];
				array[j]= array[j] - array[j-1];
			}
			else
			{
				break;
			}
		}
	}
	
		
	printf("Sorted Array:");
	
	for(i=0;i<5;i++)
	{
		printf("%3d", array[i]);
	}

	getch();
	
	
	
}
