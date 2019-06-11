// Sort an array using Shell sort Algorithm
// Author: Siddhartha Sadhukhan

#include<stdio.h>
#define MIN(a,b) ((a) < (b) ? a : b)

int array[5];

void sortFunction(int index, int increment)
{
	int i, j;
	for(i = index; i<5; i= i + increment)
	{
		for(j=MIN(i + increment, 4); j>=0; j-increment)
		{
			if(array[j] < array[j-increment])
			{
				array[j] = array[j] + array[j-increment];
				array[j-increment] = array[j] - array[j-increment];
				array[j]= array[j] - array[j-increment];
			}
			else
			{
				break;
			}
		}
	}
}

int main()
{
	int startIndex, i;
	int increment = 2;
	printf("Enter the element of the array: \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&array[i]);
	}
	
	while(increment>=1)
	{
		for(startIndex =0; startIndex < increment; startIndex++)
		{
			sortFunction(startIndex, increment);
		}
		
		increment = increment/2;
	}
	
	for(i=0;i<5;i++)
	{
		printf("%3d", array[i]);
	}

	getch();
	
}
