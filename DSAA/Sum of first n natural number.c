#include<stdio.h>
#include<conio.h>
void main()
{
int n;
int sum_natural(int );
printf("\nEnter a positive integer = ");
scanf("%d",&n);
printf("Sum of first %d natural numbers = %d",n,sum_natural(n));
getch();
}
int sum_natural(int n)
{
if(n == 1)
return 1;
else
return n + sum_natural(n-1);

}
