#include<stdio.h>
int main ()
{
	int num;
	printf("Enter any number");
	scanf("%d",&num);
	
	if (num%5==0)
	{
		printf("the number is divisible by five");
	}
	else
	{
		printf("the number is not divisible by five");
	}
	return 0;
}