#include<stdio.h>
#include<conio.h>
int main()
 {
 	int i,n,sum;
 	i=1;
 	sum=0;
 	printf("The value of n :");
 	scanf("%d",&n);
 	
 	for(i=1;i<=n;i+2)
 	  {
 	  	sum=sum+i;
	   }
	Printf("The Sum of first n odd number is %d",sum);
	return 0;
 }
