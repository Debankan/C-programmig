#include<stdio.h>

int average(int a, int b, int c);

int main()
{
   int num1, num2, num3, result;
   
   result=average(3,5,1);
   
   printf("Average of three numbers is %d",result);
   
   
}

int average(int a, int b, int c)
 {
 	int avg;
 	avg=(a+b+c)/3;
 	
 	return avg;
 }
