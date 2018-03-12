// Given a number please check if its is a armstrong number or not.
#include <stdio.h>

int is_armstrong(int num)
{
	//return 0 if true and 1 if false
	int processed_num = 0, temp=num;
	while(temp>0)
	{
		processed_num += (temp%10) * (temp%10) * (temp%10);
		temp /= 10;
	}
	if(processed_num==num)
	{
		return 0;
	}
	return 1;
}


int main()
{
	int num = 0;

	printf("Enter the number\n");
	scanf("%d", &num);

	if (is_armstrong(num) == 0)
	{
		printf("Given number is a armstrong\n");
	}
	else
		printf("Given number is not a armstrong\n");

	return 0;
}
