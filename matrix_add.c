#include <stdio.h>
 
 int main()
{
	int i,j,r,c,a[10][10],b[10][10],d[10][10];
	printf("Enter the size of matrix:\t");
	scanf("%d%d",&r,&c);
	
	
	// FIRST MATRIX
	printf("Enter the element of first matrix:\t");
  	for(i=1;i<=r;i++)
  	{
  		for(j=1;j<=c;j++)
  		{
  		scanf("%d",&a[i][j]);
  		printf("\t");
  		}
  	printf("\n");	
  	}
  	for(i=1;i<=r;i++)
  	{
  		for(j=1;j<=c;j++)
  		{
  		printf("%d",a[i][j]);
  		printf("\t");
  		}
  	printf("\n");	
  	}
  	
  	
  		
	// SECOND MATRIX
  	printf("Enter the element of second matrix:\t");
  	for(i=1;i<=r;i++)
  	{
  		for(j=1;j<=c;j++)
  		{
  		scanf("%d",&b[i][j]);
  		printf("\t");
  		}
  	printf("\n");	
  	}
  	for(i=1;i<=r;i++)
  	{
  		for(j=1;j<=c;j++)
  		{
  		printf("%d",b[i][j]);
  		printf("\t");
  		}
  	printf("\n");	
  	}
  	
  	
  	//ADD OF BOTH MATRIX
  	printf("Addition of both matrix is:\n\n");
  	for(i=1;i<=r;i++)
  	{
  		for(j=1;j<=c;j++)
  		{
  		d[i][j]=a[i][j]+b[i][j];
  		printf("%d",d[i][j]);
  		printf("\t");
  		}
  	printf("\n");	
  	}
  	return 0;
}