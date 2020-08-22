#include<stdio.h>
#include<math.h>

void Amstrong_Number(int num);
int main()
{
	int number;
	printf("Enter the number: ");
	scanf("%d", &number);
	Amstrong_Number(number);
	
	return 0;
}

void Amstrong_Number(int num)
 {
 	int duplicate,rem,Cube_of_rem,sum=0;
 	duplicate=num;
 	while(duplicate!=0)
 	 {
 	 	rem=duplicate%10;
 	 	Cube_of_rem=pow(rem,3);
 	 	sum=sum+Cube_of_rem;
 	 	duplicate=duplicate/10;
	  }
	if(sum==num)
	  printf("The %d is a amstrong number \n",num);
	else
	  printf("The %d is not a amstrong number \n", num);    
 }
