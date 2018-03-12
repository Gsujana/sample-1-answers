//In an unsorted array of elements, search for a given key. Assumes no duplicates

#include <stdio.h>
#include <stdlib.h>

int linear_search(int* array, int array_len, int key)
{
	//return either where the element was found or -1 in case the element is missing from the array.
	int iter1=0;
	while(iter1 < array_len)
	{
		if(array[iter1] == key)
			return iter1;
		iter1++;
	}
	return -1;
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

	pos = linear_search(array, array_len, key);
	
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