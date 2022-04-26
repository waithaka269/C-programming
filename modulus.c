#include<stdio.h>
int main ()
{
	int a,b;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	int modulus;
	modulus=a%b;
	printf("%d",modulus);
	return 0;
}