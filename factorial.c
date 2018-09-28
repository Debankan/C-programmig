#include<stdio.h>
#include<conio.h>
int main()
   { 
    int i,n;
    printf("Enter the number\n\n");
    scanf("%d",&n);
    long int factorial=1;
    if (n <0)
      {
      	printf("Factorial of negative number is not possible\n\n");
	  }
	  else
	    {
	    	for(i=1;i<=n;i++)
	    	{
	    	factorial=factorial*i;
	        }
	    	printf("Factorial of of the integer =%d",factorial);
		}
    return 0;
}
