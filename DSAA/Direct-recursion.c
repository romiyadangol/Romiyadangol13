//Direct recursion
//Program to find the factorial
#include<stdio.h>
#include<conio.h>
int facto(int x);
int main()
{
	int result,n;
	printf("\nEnter the number to find the factorial :");
	scanf("%d",&n);
	result=facto(n);
	printf("\nThe factorial of the %d is : %d",n,result);
	return 0;
}
int facto(int x)
{
	if(x>=1)
	{
		return x*facto(x-1);
	}
	else
	{
		return 1;
	}
	
}
