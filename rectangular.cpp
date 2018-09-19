#include<stdio.h.>
#include<conio.h>
int main()
  {
  	float w ,l , area ,perimeter , ch;
  	printf("enter 1 for are and 2 for perimeter and then enter length and breadth");
  	scanf(" %f  %f %f", &w,&l,&ch);
  	if(ch==1)
  	{
  		area= w*l;	
  	printf(" the area %f and  %f is %f", w , l , area);
      }
      else
      {
      	perimeter =2*(l+w);
  	printf(" the perimeter of %f and %f is %f", w ,l ,perimeter);
  }
  	return 0;
  }
