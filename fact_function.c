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

long int fact(int c)
{
	int n;
	long int result;
	//int factorial=1;
	result=1;
	for(n=1;n<=c;n++)
	{
		result=n*result;
	}
	return(result);

}