//Given two numbers, swap them
#include <stdio.h>

void swap_numbers_by_reference(int *num1, int *num2)
{
	int temp=0;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void swap_numbers_by_value(int num1, int num2)
{
	int temp=0;
	temp = num1;
	num1 = num2;
	num2 = temp;

	printf("%d %d\n",num1,num2);
}

void swap_numbers_by_value_without_third_var(int num1, int num2)
{
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;

	printf("%d %d\n",num1,num2);
}

void swap_numbers_by_reference_without_third_var(int *num1, int *num2)
{
	*num1 = *num1 + *num2;
	*num2 = *num1 - *num2;
	*num1 = *num1 - *num2;
}

void swap_numbers_by_reference_using_btiwise_operators(int *num1, int *num2)
{
	*num1 = *num1 ^ *num2;
	*num2 = *num1 ^ *num2;
	*num1 = *num1 ^ *num2;
}

int main()
{
	int num1, num2;

	printf("Enter the numbers\n");
	scanf("%d %d",&num1, &num2);

	//call the appropriate function here.
	printf("%d %d\n",num1,num2);
	
	return 0;
}
