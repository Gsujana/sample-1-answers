//Convert the given binary array into an unsigned integer.

#include <stdio.h>
#include <stdlib.h>

int binary_to_int(unsigned int *array, unsigned int len)
{
	int num=0, iter=len-1, factor=1;

	while(iter > -1)
	{
		if(array[iter] > 1)
		{
			printf("Entered number is not binary\n");
			exit(1);
		}
		num += array[iter]*factor;
		iter--;
		factor *= 2;
	}

	return num;
}

int main()
{
	unsigned int array_len=0, key=0, *array, iter1=0, pos=-1;

	array = (unsigned int *)malloc(array_len*sizeof(int));

	printf("Enter the number of elements in the binary array");
	scanf("%d", &array_len);

	printf("Enter the binary number ");
	while(iter1 < array_len)
	{
		scanf("%d", &array[iter1]);
		iter1++;
	}
	
	printf("The given binary number as an Integer is %d\n", binary_to_int(array, array_len));

	return 0;
}