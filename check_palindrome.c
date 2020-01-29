
#include <stdio.h>
int main()
	{
	    char string[25], reverse_string[25];
	    int  i, length = 0, flag = 0,j;
	 
	    
	    printf("Enter a string \n");
	    //gets(string);
		scanf("%[^\n]s", string);
		for (i = 0; string[i] != '\0'; i++)
	    {
	        length++;
	    }
	    for (j = length-1,i=0; 		j > 0; 		j--,i++)
	    {
	        reverse_string[j]=string[i];
	    }
	    for (i = 0; i<length; i++)
	    {
	    	if(reverse_string[i]==string[i])
	    	{	
	        	flag=1;
	        }
	    }
	    if(flag==1)
	    {
	    
	    	printf("%s The given string is palindrome\n",string);
	    }
	    else
	    {
	    	
	    	printf("%s The given string is not palindrome\n",string);
	    
	    }
	   
	     //,jprintf("%s\n", string);
	     printf("%d length\n", length); 
	     printf("\n");
	    
	return 0;
	
	}