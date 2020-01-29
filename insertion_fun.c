#include <stdio.h>
 
 int insertion_fun(int[],int);
int main()
{
	int array[20],temp,i,size,j,index;
    printf("Enter how many elements in array:\t");
	scanf("%d", &size);
	printf("Enter the elements of an array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}

	insertion_fun(array,size);

	printf("Sorted elements of an array :\n\n");
	for(i=0;i<size;i++)
	{
		//array[i]=temp_array[i];
		printf("%d\t",array[i]);
	}
	printf("\n");
  	return 0;
}


int	insertion_fun(int array[],int size)
{
int i,j,temp;
	for(i=1;   i<size;   i++)
	{
		
				//temp=array[i];
				j=i;
				while(array[j]<array[j-1]   &&   j>0  )
				{
					temp=array[j];
					array[j]=array[j-1];
					array[j-1]=temp;
					j--;
				}
		
	}
	return 0;
}