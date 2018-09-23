#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,no,sum=0,d,p;
printf("Enter the number:");
scanf("%d",&n);
no=n;
while(n>0)
{
d=n%10;
n=n/10;
for(i=1,p=1;i<=d;i++)
p=p*i;
sum=sum+p;
}
if(sum==no)
{
printf("%d is a Peterson number",no);
}
else
{
printf("%d not a Peterson number",no);
}
return 0;
}
