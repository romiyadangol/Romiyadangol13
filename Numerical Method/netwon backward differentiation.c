#include<stdio.h>
#include<conio.h>
int main()
{
	float x[20], y[20][20];
 	int i,j, n;
	/* Input Section */
 	printf("Enter number of data?\n");
 	scanf("%d", &n);
 	printf("Enter data:\n");
	for(i = 0; i < n ; i++)
 	{
  		printf("x[%d]=", i);
 		scanf("%f", &x[i]);
 		printf("y[%d]=", i);
  		scanf("%f", &y[i][0]);
 	}
for(j=1;j<n;j++)
//for j = 0 initially input is taken so we start from j=1
        for(i=n-1;i>(j-1);i--)
            y[i][j] = y[i][j-1] - y[i-1][j-1];
    printf("\n***********Backward Difference Table ***********\n");
//display Backward Difference Table
    for(i=0;i<n;i++)
    {
        printf("\t%.2f",x[i]);
        for(j=0;j<=i;j++)
            printf("\t%.2f",y[i][j]);
        printf("\n");
    }
return 0;
}
