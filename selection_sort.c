// Sort a array using Selection sort Algorithm

// Author: Siddhartha Sadhukhan

#include<stdio.h>

int main()
{
	int array[5];
	int i, j;
	
	printf("Enter the series of number of the array: \n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d", &array[i]);
	}
	
	
	// Sorting smallest element to the left side of the array
	for(i=0; i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(array[i] > array[j])
			{
				array[j] = array[i]+ array[j];
				array[i] = array[j]-array[i];
				array[j] = array[j]-array[i];
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


