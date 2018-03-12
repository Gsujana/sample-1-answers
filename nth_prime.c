// Given a number please generate the nth prime number.
#include <stdio.h>
#include <math.h>

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
int nth_prime(int num)
{
	//return the nth prime number.
	int count = 1, iter1=0;
	if (num == 1)
	{
		return 2;
	}

	while(count<=num)
	{
		if(is_prime(iter1) == 0)
		{
			count++;
		}
		iter1++;
	}


	return iter1-1;
}


int main()
{
	int num = 0;

	printf("Enter the number\n");
	scanf("%d", &num);

	printf("The %d th prime number is %d\n", num, nth_prime(num));

	return 0;
}
