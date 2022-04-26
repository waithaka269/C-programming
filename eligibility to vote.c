#include<stdio.h>
int main ()
{
	int age,nationality;
	char nat[]="kenyan";
	
	printf("Enter your age");
	scanf("%d",age);
	
	printf("Enter your nationality");
	scanf("%d",&nat);
	
	if(age>=18&& nat=="kenyan")
	{
		printf("you are eligible to vote");
	}
	else
	{
		printf("you are not eligible to vote"); 
	}
	return 0;
}