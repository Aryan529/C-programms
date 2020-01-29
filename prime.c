#include <stdio.h>
 
int main()
{
	int num,i,c,d,carry;
    printf("Enter a number to check prime or not:");
	scanf("%d", &num);
	
	 
	 
		for(i=2;i<num;i++)
		{
			//carry=num%i;
			if(num%i==0)
			{
				printf("Number is not Prime=%d\n",num);
				break;
			}
			
			
		}
		 if(i==num)
			{
				printf("Number is prime=%d\n",num);
				//break;
			}

	
	
	return 0;
}


