//Convert the given unsigned integer into a binary array.

#include <stdio.h>
#include <stdlib.h>

int count_bits(int num)
{
	int iter=0;

	while(num > 0)
	{
		num /= 2;
		iter++;
	}
	return iter;
}

int* int_to_binary(int num, int *len)
{
	int *binary=NULL, iter=0, num_bits=0;

	num_bits = count_bits(num);
	binary = (int *)malloc(sizeof(int)*num_bits);
	
	while(num > 0)
	{
		binary[iter] = num%2;
		num /= 2;
		iter++;
	}

	iter=0;
	while(iter < num_bits/2)
	{
		binary[num_bits - iter -1] = binary[num_bits - iter -1] + binary[iter];
		binary[iter] = binary[num_bits - iter -1] - binary[iter];
		binary[num_bits - iter -1] = binary[num_bits - iter -1] - binary[iter];
		iter++;
	}
	*len = num_bits;

	return binary;
}

int main()
{
	int num=0, *binary, len, iter=0;

	printf("Enter the number to be converted to binary: \n");
	scanf("%d", &num);

	binary = int_to_binary(num, &len);

	iter=0;
	printf("\n");
	while(iter < len)
	{
		printf("%d\t", binary[iter]);
		iter++;
	}
	printf("\n");
	return 0;
}
