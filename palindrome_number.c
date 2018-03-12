// Given a number please check if its is a palindrome or not.
#include <stdio.h>

int is_palindrome(int num)
{
	//return 0 if true and 1 if false
	int rev_num = 0, temp=num;
	while(num>0)
	{
		rev_num = (num%10)+(rev_num*10);
		num /= 10;
	}
	if(rev_num==temp)
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

	if (is_palindrome(num) == 0)
	{
		printf("Given number is a palindrome\n");
	}
	else
		printf("Given number is not a palindrome\n");

	return 0;
}
