#include<stdio.h>
#include<conio.h>
int main()
{
	int number;
	printf("enter the number to be checked");
	scanf("%d", &number);
	if ( number > 90)
	{
		printf(" Grade A");
	}
		else if( number>=81 && number<= 90)
		{
			printf("grade B");
		
		}
		 else if (number>= 71 && number<= 80)
		 {
		 	printf(" Grade C");
	
	       }
	       else if(number >= 61 && number<= 70 )
	       {
	       	printf(" Grade d");
		   }
	       else 
	       {
	       	printf(" fail");
	       }
	    return 0;
		   }
	

