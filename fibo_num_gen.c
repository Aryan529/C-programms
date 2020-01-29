#include <stdio.h>
int fibo(int);
int main()
{
	int num,result;

    printf("Enter the position of element of fibonacci series you want:\t");
	scanf("%d", &num);
	result= fibo(num);
	printf("Fibonacci number  of %d position =%d\n",num, result);
  	return 0;
}


int fibo(int num)
{
	int result;

	//result=1;
	if(num==0||num==1)
	{
		result = num;
	}
	else
	{
		result=fibo(num-1)+fibo(num-2);
	}
	
	return(result);

}