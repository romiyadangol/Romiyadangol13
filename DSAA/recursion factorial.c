#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
	int n,result;
	printf("Enter a number to find factorial: \n");
	scanf("%d",&n);
	result=factorial(n);
	printf("The factorial of %d is %d",n,result);
	return 0;
}
int factorial(int a)
{
	if(a==1)
	{
		return 1;
	}
	else{
		return (a*factorial(a-1));
	}
}
