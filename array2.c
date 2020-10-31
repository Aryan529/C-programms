#include <stdio.h>
void main()
{
	int odd(int);
	int b,a[5],i;
	printf("enter five numbers\n");
	for(i=0;i<=4;i++)
	 scanf("%d",&a[i]);
	b=odd(a[i]); 
	
}
int odd(int a[i])
  {
	if(a[i]%2==0)
	printf("the no. is even\n");
	else
	printf("the no. is odd\n");
	return(0);
   }
