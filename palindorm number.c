#include<stdio.h>
#include<conio.h>
  int main()
     {
     	 int n,temp,reverse,rem;
     	 reverse=0;
     	 printf("Enter a number\n\n");
     	 scanf("%d",&n);
     	 temp=n;
     	 
     	 while(n>0 )
     	   {
     	   	rem=n%10;
     	   	reverse=reverse*10+rem;
     	   	n=n/10;
			}
	    if(reverse==temp)
	        {
	        	printf("%d is a palindorm",temp);
			}
		else
		  {
		  	printf("%d is not a palindorm",temp);
		  }
	return 0;
}
