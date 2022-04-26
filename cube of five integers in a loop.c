//C program to find the cube of five integers
#include<stdio.h>
void main()
{
	int i;
	printf("cube of first 5 integers\n");
	for(i=1; i<=5; i++)
	{
		printf("the number is:%d",i);
		printf("cube of the number is:%d\n\n",i*i*i);
	}
}