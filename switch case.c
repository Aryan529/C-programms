#include <stdio.h>
main()
{
while(1)
  {

	int a,b,c,d;
	printf("Menu\n");
	printf("Choose the choice from menu\n");
	printf("********\n");
	printf("1.Addition\n");
	printf("2.odd-even\n");
	printf("3.printing first n natural numbers\n");
	printf("4.Exit\n");
     printf("********\n");
     printf("enter your choice");
     scanf("%d",&a);
     switch(a)
       {
       	case 1:
       		printf("enter any two integers\n");
       		scanf("%d%d",&b,&c);
       		d=b+c;
       		printf("answer is:%d\n",d);
       		break;
       	case 2:
		     printf("enter the integer\n");
			scanf("%d",&b);
			if (b%2==0)
			 printf("the integer is even\n");
			else 
			  printf("the integer is odd\n");
			break;
		case 3:
			printf("enter the integer to find its table\n");
			scanf("%d",&b);
			 for (d=1;d<=b;d++)
			 printf("%d",d);
			break;
		case 4: exit(0);
		default:
			printf("invalid choice\n");		   	
	}
	}
	}
