#include<stdio.h>
#include<conio.h>
int fibo(int);
int main()
{
	int x=0,i, n;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",fibo(x));
		x++;
	}
	return 0;
}
int fibo(int n)
	{
		if(n==0)
		{
			return 0;
		}
		else if(n==1)
		{
			return 1;
		}
		else
		{
			return fibo(n-1) + fibo(n-2);
		}
	}
	

