#include<stdio.h>

int main()
 {
 	int num,factorial=1;
 	printf("Enter the number: \n");
 	scanf("%d", &num);
 	
 	printf("-:Find the facorial of the number:-\n \n");
 	
 	if(num==1)
 	 {
 	 	printf("Factorial of %d is %d",num,factorial);
	  }
	else
	  {
	  	int i;
	  	for(i=num;i>=1;i--)
	  	 {
	  	 	factorial=factorial*i;
		   }
		  printf("Factorial of %d is %d",num,factorial); 
		}
	return 0;	  
 }
