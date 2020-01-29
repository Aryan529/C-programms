#include <stdio.h>
 
 int radix_fun(int[],int);
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

	radix_fun(array,size);

	printf("Sorted elements of an array :\n\n");
	for(i=0;i<size;i++)
	{
		//array[i]=temp_array[i];
		printf("%d\t",array[i]);
	}
	printf("\n");
  	return 0;
}


int	radix_fun(int array[],int size)
{
	int bucket[10][10],buck[5],i,j,k,l,num,div,large,passes;
	//int i,j,k,l,num,div,large,passes;
	num=0;
	div=1;
	large=array[0];
	
	for(i=0;i<size;i++)
	{
		if(array[i]>large)
		large=array[i];
	}
	
	while(large>0)
	{
		num++;
		large=large/10;
	}
	for(passes=0;passes<num;passes++)
	{
		//for(k=0;k<10;k++)
		
			//buck[k]=0;
			for(i=0;i<size;i++)
			{
				l=(array[i]/div)%10;
				bucket[l][buck[l]++]=array[i];
			}
			i=0;
			for(k=0;k<10;k++)
			{
				for(j=0;j<buck[k];j++)
				{
					array[i++]=bucket[k][j];
				}
				div=div*10;
			}
	
			
		
	}
	
	return 0;
}