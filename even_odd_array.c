#include <stdio.h>
 
 
int main()
{
	int array[10],temp,i,size,j=0,k=0,even[10],odd[10],carry,count=0,count1=0;
    printf("Enter how many elements in array:\t");
	scanf("%d", &size);
	printf("Enter the elements of an array\n");
	for(i=1;i<=size;i++)
	{
		scanf("%d",&array[i]);
	}
	
		for(i=1;   i<=size;   i++)
		{
			temp=array[i];
			carry=temp%2;
			
			
			if(carry==1)
			{
				odd[j]=temp;
				j=j+1;
				count++;
				//break;
			}
			else
			{
				even[k]=temp;
				k=k+1;
				count1++;
				//break;
			}
		}
	printf("\n");
	printf("Even elements of an array :\n\n");
	for(k=0;k<count1;k++)
	{
		printf("%d\t",even[k]);
	}
		
	printf("\n");	
	printf("Odd elements of an array :\n\n");
	for(j=0;j<count;j++)
	{
		printf("%d\t",odd[j]);
	}
		
	
	printf("\n");
	//printf("Second maximum elements of an array =%d\t" ,array[1]);
	
  	return 0;
}


