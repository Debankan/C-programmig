#include<stdio.h>
#include<conio.h>
int main()
   { 
    int n,digi,sum=0,pro=1;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>0)
       {
       	digi=n%10;
       	pro=pro*digi;
       	sum=sum+digi;
       	n=n/10;
	   }
	printf("sum of all digits of the integer is =%d\n\n", sum);
	printf("Product of all digits of the integer is =%d\n\n",pro);
	return 0;
}
	
