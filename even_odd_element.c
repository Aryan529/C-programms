#include <stdio.h>
 
 
int main()
{
	int array[20],i,size,temp;
    printf("Enter how many elements in array:\t");
	scanf("%d", &size);
	printf("Enter the elements of an array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	/*for(i=0;i<size;i++)
	{
		array[i]=array[i]*array[i];
	}*/
	printf(" The Resultant array is:\n\n");
	for(i=0;i<size;i++)
	
	{
		temp=array[i]%2;
		if(temp==0)
		{
		//array[i]=temp_array[i];
			printf("%d\t is Even",array[i]);
			printf("\n");
		}
		else
		{
		printf("%d\t is Odd",array[i]);
		printf("\n");
		}
	}
		
	printf("\n");
  	return 0;
}