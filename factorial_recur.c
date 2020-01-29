#include <stdio.h>
long int fact(int);
int main()
{
	int num;
	long int result;
    printf("Enter a number to calculate it's factorial:");
	scanf("%d", &num);
	result= fact(num);
	printf("Factorial of %d=%ld\n",num, result);
  	return 0;
}

long int fact(int num)
{
	//int n;
	long int result;
	//int factorial=1;
	result=1;
	if(num>1)
//while(num>1)
	{
		result=num*fact(num-1);
		//num=num-1;
	}
	return(result);

}