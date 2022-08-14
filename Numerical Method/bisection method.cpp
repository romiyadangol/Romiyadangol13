//Bisection method 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
float fun (float c)
{
	return(c*c*c+c*c+c+7);
}
	void bisection (float *x, float a, float b, int *itr)
	{
    	*x=(a+b)/2;
    	++(*itr);
    	printf("Iteration no. %3d X = %7.5f\n", *itr, *x);
	}
int main()
{
	float a,b,x,x1,aller;
	int  itr=0,maxitr;
	printf("\n x^3 +x^2 +x+7 =0");
	printf("\nEnter the value of a and b respectively:");
	scanf("%f%f",&a,&b);
	printf("\nEnter the maximum iteration to be allowed:");
	scanf("%d",&maxitr);
	printf("\nEnter the allowed error :");
	scanf("%d",&aller);
	bisection(&x,a,b,&itr);
	do
	{
		if(fun(a)*fun(x)==0)
		{
			printf("\nThe root equals x1 terminate the computation.");
			printf("\nTerminating the program.......");
			exit (0);
		}
		if (fun(a)*fun(x)<0)
		{
			printf("\nThe root lies in the sub interval(i.e. between x1 & a)\n");
			b=x;
		}
		else
		{
			a=x;
		}
		bisection(&x1,a,b,&itr);
		if(fabs(x1-x)<aller)
		{
			printf("After %d iterations, root = %6.4f\n", itr, x1);
	        return 0;
		}
		x=x1;
	}
	while(itr < maxitr);
	printf("The solution does not converge or iterations are not sufficient");
    return 1;
}
