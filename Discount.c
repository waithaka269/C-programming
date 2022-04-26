#include<stdio.h>
int main ()
{
	int amount,discount;
	printf("Enter the amount");
	scanf("%d",&amount);
	discount=amount*0.1;
	
	if (amount>1000)
	{
		printf("%d",discount);
	}
	else
	{
		printf("\n no discount");
	}
	return 0;
}