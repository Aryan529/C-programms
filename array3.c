#include <stdio.h>
main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	
	printf("enter four numbers\n");
	for(i=0;i<=1;i++)
	  for(j=0;j<=1;j++)
	scanf("%d",&a[i][j]);
	
	printf("enter four numbers\n");
	for(i=0;i<=1;i++)
	  for(j=0;j<=1;j++)
	scanf("%d",&b[i][j]);
	
	for(i=0;i<=1;i++)
	{
	  for(j=0;j<=1;j++)
	  {
	  	c[i][j]=a[i][j]+b[i][j];
	printf("%d\n",c[i][j]);
       }
     }
}
