//function for even and odd number
#include <stdio.h>

char* odd_even(int num);

int main()
{
   int num;
 printf("Enter any number");
   scanf("%d",&num);

   printf(" %s",odd_even(num));
   return 0;
}

char* odd_even(int num)
{
  if (num%2==0)
  {
      printf("the number is even");
   }
   else
   {
      printf("the number is odd");
   }
}