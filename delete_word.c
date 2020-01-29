	#include <stdio.h>
	#include <string.h>
	 
	int main()
	{
	    int i, j = 0, k = 0, m,n, len;
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


	    b[k][j] = '\0';
	    for (i = 0;i <= k;i++)	
	    {
	        for (j = i + 1;j <= k;j++)
	        {
	            if (strcmp(b[i], b[j]) == 0)
	            {
	                for (m = j;m <= k;m++)
	                    strcpy(b[m], b[m + 1]);
	                k--;
	            }
	        }
	    }
	    printf("After delete all repeated words the string is :\n");
	    for (n = 0;n < k;n++)
	    {
	        printf("%s ", b[n]);
	    }
	    printf("\n");
	}
