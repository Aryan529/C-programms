#include <stdio.h>
main()
{
	int x=6,*j;
	j=&x;
	printf("%d\t %u\n",&x,*j);
	printf("%u\n",*&j);
}
