	#include <stdio.h>
	#include <string.h>
	 
	int main()
	{
	    int i, j = 0, k = 0,len;
	    char str[50], b[10][10], temp;

	 
	    printf("enter the string\n");
	    scanf("%[^\n]s", str);
	    for (i = 0;str[i] != '\0';i++)
	    {
	        if (str[i] == ' ')
	        {
	        	b[k][j] = '\0';
	            k++;
	            j = 0;
	        }
	        else
	        {
	            b[k][j] = str[i];
	            j++;
	        }
	    }
		 printf("Total number of words in the string is :%d",k+1);
		 printf("\n");
	}