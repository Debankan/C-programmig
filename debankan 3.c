#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enter a and b");
	scanf("%d %d", &a ,&b);
	a=(a*b);
	b=a/b;
	a=a/b;
	printf("After swapping the value of a and b ");
	printf("%d %d", a,b);
	return 0 ;
	
}
