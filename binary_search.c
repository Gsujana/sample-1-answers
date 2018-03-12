//In a sorted array of elements, search for a given key. Assumes no duplicates

#include <stdio.h>
#include <stdlib.h>

int binary_search(int* array, int high, int low, int key)
{
	int mid=(high+low)/2;

	if (high < low)
	{
		return -1;
	}
	else if(array[mid] == key)
		return mid;
	else if (key < array[mid])
	{
		return binary_search(array, mid-1, low, key);
	}
	else
	{
		return binary_search(array, high, mid+1, key);
	}
}

int main()
{
	int array_len=0, key=0, *array, iter1=0, pos=-1;

	array = (int *)malloc(array_len*sizeof(int));

	printf("Enter the number of elements");
	scanf("%d", &array_len);

	printf("Enter the numbers");
	while(iter1 < array_len)
	{
		scanf("%d", &array[iter1]);
		iter1++;
	}
	
	printf("Enter the key to search");
	scanf("%d", &key);

	pos = binary_search(array, array_len-1, 0, key);
	
	if(pos == -1)
	{
		printf("The said element %d cannot be found in the array\n",key);
	}
	else
	{
		printf("The said element %d was found at pos: %d in the given array\n", key, pos);
	}
	return 0;
}