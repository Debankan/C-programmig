#include<stdio.h>

int main()
 {
 	int num,factorial=1;
 	printf("Enter the number: \n");
 	scanf("%d", &num);
 	
 	if(num==1)
 	 {
 	 	printf("Factorial of %d is %d", num,factorial);
	  }
	else
	  {
	  	while(num!=1)
	  	 {
	  	 	factorial=factorial*num;
	  	 	num--;
		   }
		printf("Factorial of %d is %d", num, factorial);   
		}
		
	return 0;	  
 }
