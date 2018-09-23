#include<stdio.h>

int main()
{


 float width,length,area,perimeter;
 int x;
 printf("1 For calculation of area\n");
 printf("2 For calculation of perimeter\n");
 printf("\n\nEnter Your Choice\n");
 
 scanf("%d",&x);
 switch(x)
 {
 case 1:
 ;printf("\nEnter The Value of width and length: ");
  scanf("%f %f",&width , &length);
  area=width*length;
  printf("\n\nArea of rectangle: %f ",area);
  break;
  case 2:
   ;printf("\nEnter The Value of width and length: ");
  scanf("%f %f",&width,&length);
  perimeter=2*(width+length);
  printf("\n\nperimeter of rectangle: %f ",perimeter);
  break;
  
 default :
 printf("\n\nWrong Choice.....Try Again!!!\n");
 
}
 return(0);
}
