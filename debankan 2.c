#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,c;
	printf("enter num1 and num2");
	scanf("%d %d", &num1,&num2);
	c=num1;
	num1=num2;
	num2=c;
	printf("After swapping the value of num1 and num2 is %d %d",num1 ,num2);
	return 0 ;
	
}
