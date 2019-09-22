#include <stdio.h>
void main()
{
	int a[4];
	input();
	display();
	sort();
	display();
	
}
void input(int *p)
{
	int i;
	printf("enter 4 integers\n");
	  for (i=0;i<=3;i++)
	 scanf("%d",p+i); 
}
void display(int *p)
{
	int i;
	 for (i=0;i<=3;i++)
	printf("%d\t",*(p+i)); 
}


void sort(int*p)
{
	int t,x,y;
	for (x=1;x<=3;x++)
	  {
	  	for(y=0;y<=3-y;y++)
	  	{
	  		if (*(p+i)>*(p+i+1))
		      {
          	t=*(p+i);
	          *(p+i)=*(p+i+1);
            	*(p+i+1)=t;
                    }
          }
       }
}

