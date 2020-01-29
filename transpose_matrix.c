#include <stdio.h>
 
 int main()
{
	int i,j,r,c,a[10][10],tran[10][10],d[10][10];
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
  	
  	
  	for(i=1;i<=r;i++)
  	{
  		for(j=1;j<=c;j++)
  		{
  		//printf("%d",a[i][j]);
  		//printf("\t");
  		tran[j][i]=a[i][j];
  		}
  	printf("\n");
  	}
  	
  	printf("Transpose of given matrix is:\t ");
  	
  	for(i=1;i<=c;i++)
  	{
  		for(j=1;j<=r;j++)
  		{
  		printf("%d\n",tran[i][j]);
  		printf("\t");
  		}
  	printf("\n");	
  	}
  	return 0;
}