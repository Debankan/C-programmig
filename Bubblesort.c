#include<stdio.h>
#include<conio.h>
int main()
{	
	int i,j,n,a[100],temp;
	printf("enter a limit\n");
	scanf("%d",&n);
	printf("Enter the Numbers\n");
	for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			
	int flag=1;
	for(i=0;i<(n-1)&&flag==1;i++)
		{
			flag=0;
			for(j=0;j<n-i-1;j++)
				{
				if(a[j]>a[j+1])
					{
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
						flag=1;
						printf("%d \n",a[j]);
					}
				}				
		}
		
	printf("the sorted numbers are:\n");
	for(i=0;i<n;i++)	
			printf("%d \n",a[i]);
	return 0;
}
	
