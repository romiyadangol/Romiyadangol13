#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) x*x+4*x-9
#define g(x) 2*x+4
int main()
{
	float x0,t_error,x1,f0,g0,f1,e;
	int max,itr=1;
	printf("Enter the intial guess: ");
	scanf("%f",&x0);
	printf("Enter the tolerance error: ");
	scanf("%f",&t_error);
	printf("Enter the maximum iteration: ");
	scanf("%d",&max);
	do
	{
		g0=g(x0);
		f0=f(x0);
		if(g(0)==0)
		{
			printf("Mathematical ERROR!!!");
			exit(0);
		}
		x1=x0-f0/g0;
		printf("Iteration: %d\n",itr);
		printf("x0=%f\n",x0);
		printf("f(x0)=%f\n",f0);
		printf("f'(x0)%f\n",g0);
		printf("x1=%f\n",x1);
	    x0 = x1;
	    itr=itr+1;
	    if(itr>max)
	    {
	    	printf("Error!!!");
			exit(0);
		}
		f1=f(x1);
	}while(fabs(f1>e));
		printf("The root is %f",f1);
		return 0;
}
