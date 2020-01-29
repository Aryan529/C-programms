#include <stdio.h>
 
 
int main()
{
	int array[20],i,size,position,value;
    printf("Enter how many elements in array:\t");
	scanf("%d", &size);
	printf("Enter the elements of an array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the position where you want to delete element:\t");
	scanf("%d", &position);
	
	//printf("Enter the value to insert:\t");
	//scanf("%d", &value);
	
	for(i=position-1;   i<size-1 ;   i++)
	{
		//temp=array[i];
		array[i]=array[i+1];
	}
		//array[position-1]=value;
		
	
	printf("Resultant array :\n\n");
	for(i=0;i<size-1;i++)
	{
		//array[i]=temp_array[i];
		printf("%d\t",array[i]);
	}
	printf("\n");
  	return 0;
}