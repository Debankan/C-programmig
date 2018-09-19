#include<stdio.h>
#include<conio.h>
int main ()
{
	printf("Enter the year to be checked");
	int year;
	scanf("%d", &year);
if(year %4 == 0)&&(year % 100 != 0)&&(year % 400 == 0)
{ 
  printf("this is a leap year");
	}
	else
	{ 
	 printf("this is not a leap year");
		}
		return 0;
		
}
