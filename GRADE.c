//Grading system
#include<stdio.h>
int main ()
{ 
int phy,chem,bio,avg;
	printf("enter marks for phy,chem,bio"  );
	scanf("%d%d%d",&phy,&chem,&bio);
	avg=(phy+chem+bio)/3;
printf("the average score is %d",avg);
if(avg>=70&& avg<=100)
{
	printf("Grade A");
}
 if(avg>=60 && avg<=69)
{
	printf ("Grade B");
	
}
else if(avg>=50 && avg<=59)
{
	printf("Grade C");
}
else if(avg>=40 && avg<=49)
{
	printf("Grade D");
	
}
else
{
	printf("fail");
}
return 0;

}