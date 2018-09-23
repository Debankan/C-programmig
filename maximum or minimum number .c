#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c;
 printf("Enter 3 numbers");
 scanf("%d %d %d",&a,&b,&c);
 if(a>b && a>c)
 {
  printf("\n\nMaximum number is  = %d\n",a);
 }
 else if(b>a && b>c)
 {
 
  printf("\n\nMaximum number is  = %d\n",b);
  }
 else
 {
 
   printf("\n\nMaximum number is  = %d\n",c);
}
 if(a<b && a<c)
{

  printf("\n\nMinimum number is  = %d\n\n",a);
}
 else if(b<a && b<c)
 {
  printf("\n\nMinimum number is = %d\n",b);
}
 else
   {
   printf("Minimum number is = %d",c);
}
return 0;
}
