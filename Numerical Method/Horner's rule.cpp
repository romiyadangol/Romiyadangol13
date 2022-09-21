#include<stdio.h>
#include<conio.h>
int main() {
	int degree,x;
	int coeff[10], i;
	int sum = 0;
	
	// Getting the degreee of the polynomial
	printf("\nEnter the degree of the polynomial: ");
	scanf("%d",&degree);
	
	// Getting the coefficients of all terms of the polynomial
	printf("\nEnter the coeffients from lower order to higher order: \n");
	for(i=0; i<=degree; i++) {
		scanf("%d",&coeff[i]);
	}
	
	// Getting the value of the variable
	printf("\nEnter the value of x: ");
	scanf("%d",&x);

	// Applying Horner's rule
	sum = coeff[degree];
	for(i=degree-1; i>=0; i--) {
		sum = sum*x + coeff[i];
	}
	
	// Printing result
	printf("\nResult: %d",sum);
	return 0;
}
