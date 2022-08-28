//Indirect Recursion
#include<stdio.h>
#include<conio.h>
int facto1(int x1);
int facto2(int x2);
int main()
{
	int n,result;
	printf("\nEnter the number to find the factorial :");
	scanf("%d",&n);
	result=facto1(n);
	printf("\nThe factorial of the %d number is : %d",n,result);
	return 0;
}
int facto1(int x1)
{
	if(x1>=1)
	{
		return(x1*facto2(x1));
	}
	else
	{
		return 1;
	}
}
int facto2(int x2)
{ 
	if(x2>=1)
	{
		return facto1(x2-1);
	}
	else
	{
		return 1;
	}
}
