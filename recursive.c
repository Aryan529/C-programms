#include <stdio.h>
void main()
{
	int i;
	i=sum(87);
	printf("%d\n",i);
}

int sum(int a)
{ 
 int s;
 if (a==1)
  return(a);
 s=a+sum(a-1);
  return(s); 
}
