// Given a number please generate n prime numbers.
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int is_prime(int num)
{
	//return 0 if true and 1 if false
	int iter1=2, sqrt_num=0;

	if(num < 2)
		return 1;
	else if(num == 2)
		return 0;
	else if(num > 2 && num%2 == 0) 
		return 1;
	else
	{
		sqrt_num = sqrt(num);
		while(iter1 <= sqrt_num)
		{
			if (num%iter1 == 0)
			{
				return 1;
			}
			iter1++;
		}
	
	}
	return 0;
}

int* n_primes(int num)
{
	//return an array of size n in which all numbers are prime.
	int count = 1, iter1=2, *primes;

	primes = (int *)malloc(num*sizeof(int));
	while(count<=num)
	{
		if(is_prime(iter1) == 0)
		{
			primes[count-1] = iter1;
			count++;
		}
		iter1++;
	}


	return primes;
}

int main()
{
	int num = 0, *primes, iter1=0;

	printf("Enter the number\n");
	scanf("%d", &num);

	primes = n_primes(num);
	printf("\nPrimes till %d are: \n",num);
	for (iter1=0; iter1<num; iter1++)
	{
		printf("%d\t", primes[iter1]);
	}

	return 0;
}
