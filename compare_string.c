
#include <stdio.h>
int main()
	{
	    char string[25], string1[25];
	    int  i=0, length = 0, length1 = 0,flag=0,j;
	 
	    
	    printf("Enter a string \n");
		gets(string);
		
		printf("Enter a sub string \n");
		gets(string1);
		while(string[length]!='\0')
	    length++;
	    
	    
	    while(string1[length1]!='\0')
	    length1++;
	    
	   	while((i<length) && (i<length1) )
	   	{
	   		if(string[i]==string1[i])
	   	 	{
	   	    		i++;
	   	    		continue;
	   	    }
	   	    if(string[i]<string1[i])
	   	 	{
	   	    		flag=-1;
	   	    		break;
	   	    }
	   	    if(string[i]>string1[i])
	   	 	{
	   	    		flag=1;
	   	    		break;
	   	    }
	   	    
	   	}
	   	if(flag==0)
	   	printf("Both strings are same\n");
	   	
	   	if(flag==-1)
	   	printf("string1 is less than string2\n");
	   	if(flag==1)
	   	printf("string1 is grater than string2\n");
	   	
	   	printf("\n");
	   	return 0;
	}