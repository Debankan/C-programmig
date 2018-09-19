#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter a and b");
	scanf("%d %d", &a ,&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping the value of a and b ");
	printf("%d %d", a,b);
	return 0 ;
	
}
