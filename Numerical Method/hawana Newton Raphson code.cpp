#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
float function(float);
float func2(float);
float fun3(float,float,float);
int main()
{
	float x0,result1,result2,answer=0,tolerr;
	int maxitr,i;
	printf("\nEnter the initial guess :");
	scanf("%f",&x0);
	printf("\nEnter the maximum iteration :");
	scanf("%d",&maxitr);
	printf("\nEnter the tolerance error :");
	scanf("%f",&tolerr);
	for(i=0;i<maxitr;i++)
	{
		result1=function(x0);
		result2=func2(x0);
		answer=fun3(x0,result1,result2);
		x0=answer;
		printf("\nThe %d iteration is = %f",i+1,answer);	
	}
	return 0;
}
float function(float x)
{
	return(x*x+4*x-9);
}
float fun3(float a,float b,float c)
{
	float d,e,f;
	d=b/c;
	e=a-d;
	return e;	
}
float func2(float x1)
{
	return(2*x1+4);
}
