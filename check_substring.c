
#include <stdio.h>
int main()
	{
	    char string[25], sub_string[25];
	    int  i, length = 0, length1 = 0,flag,j;
	 
	    
	    printf("Enter a string \n");
		gets(string);
		
		printf("Enter a sub string \n");
		gets(sub_string);
		while(string[length]!='\0')
	    length++;
	    
	    
	    while(sub_string[length1]!='\0')
	    length1++;
	    
	   for (i = 0; i<=length-length1; i++)
	   {
	    	for (j = i; j<i+length1; j++)
	   	    {
	   	    	flag=1;
	   	    	if(string[j]!=sub_string[j-i])
	   	    	{
	   	    		flag=0;
	   	    		break;
	   	    	}
	   	    	
	   	    }
	   	    if(flag==1)
	   	    break;
	   	}
	   	if(flag==1)
	   	printf("sub string present in string");
	   	
	   	else
	   	printf("sub string not present in string");
	   	
	   	printf("\n");
	   	return 0;
	}