#include<stdio.h>
#include<conio.h>
 int main()
   {
   	 int i,n,p,d,no,sum;
   	 sum=0;
   	 printf(" Enter The number\n\n");
   	 scanf("%d",&n);
   	 no=n;
   	 while(n>0)
   	    {
   	      d=n%10;
   	      n=n/10;
   	      p=1;
   	    for(i=1;i<=d;i++)
   	       {
   	       	
   	       	p=p*i;
   	       }
   	       	sum=sum+p;
	}
		   
		   
		    if(sum==no)
		      {
		      	printf("%d is a peterson number\n\n",sum);
			  }
		else 
		    {
		    	printf("%d is not a peterson number\n\n",sum);
				  }
        return 0 ;
}
