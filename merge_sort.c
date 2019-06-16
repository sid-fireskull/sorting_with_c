// Sort an array using merge sort Algorithm
// Author: Siddhartha Sadhukhan

#include<stdio.h>

// Divide the array into two part
mergeSort(int array[], int arraySize)
{
	int mid;
	int i;
	if(arraySize < 2) // Return when only one element in the array
	{
		return;
	}
	mid = (int) arraySize/2;
	
	int left[mid];
	int right[arraySize - mid];
	
	for(i=0;i < arraySize;i++)
	{
		if(i<mid)
		{
			left[i]= array[i];
		}
		else
		{
			right[i-mid]=array[i];
		}
	}
	mergeSort(left, sizeof(left)/sizeof(int));
	mergeSort(right, sizeof(right)/sizeof(int));
	merge(left, right, sizeof(left)/sizeof(int), sizeof(right)/sizeof(int), array);
	
}


// Merging the array
merge(int left[], int right[], int leftLength, int rightLength ,int array[])
{
	int i, j, k;
	i=0;
	j=0;
	k=0;
	
	while(i<leftLength && j < rightLength)
	{
		if(left[i]<right[j])
		{
			array[k] = left[i];
			i++;
		}
		else
		{
			array[k] = right[j];
			j++;
		}
		k++;
	}
	
	// When all the element of one of the array exausted
	
	while(i < leftLength)
	{
		array[k]= left[i];
		i++;
		k++;
	}
	
	while(j < rightLength)
	{
		array[k] = right[j];
		j++;
		k++;
	}
}

int main()
{
	int array[7];
	unsigned int arraySize = sizeof(array)/sizeof(int);
	int i;
	
	printf("Enter the element of array: \n");
	
	for(i=0;i<arraySize;i++)
	{
		scanf("%d",&array[i]);
	}
	
	mergeSort(array,arraySize);
	
	printf("Sorted Array:");
	
	for(i=0;i<arraySize;i++)
	{
		printf("%3d", array[i]);
	}

	getch();
}
