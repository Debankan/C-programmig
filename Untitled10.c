#include<stdio.h>

int main()
{


 float fah,cel,centigrade, fahrenheit;
 int x;
 printf("1 For Fahrenheit To Celsius\n");
 printf("2 For Celsius To Fahrenheit\n");
 printf("\n\nEnter Your Choice\n");
 
 scanf("%d",&x);
 {
 if(x=1)
 {
  printf("\nEnter The Value of Fahrenheit Temperature: ");
  scanf("%f",&fah);
  centigrade=(fah-32)/1.8;
  printf("\n\nCelsius Temperature: %f ",centigrade);

}
  
 else if (x=2)
   {
  printf("\nEnter The Value of Celsius Temperature: ");
  scanf("%f",&cel);
  fahrenheit=(cel*1.8)+32;
  printf("\n\nFahrenheit Temperature: %f ",fahrenheit);
  
  }
 else
 {
 
 printf("\n\nWrong Choice.....Try Again!!!\n");
 }
}
 return(0);
}
