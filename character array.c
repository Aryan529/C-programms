#include <stdio.h>
void main()
{
	int x,a,b,c;
	char s1[20],s2[20],s3[20];
	printf("Enter any character in string\n");
	scanf("%s%s",&s1,&s2);
	x=strcmp(s1,s2);
	if (x!=0)
	 {
	 printf ("the strings are not equal\n");
 	  strcat(s1,s2);}
 	else
	 printf("the strings are equal\n");
	strcpy(s3,s1);
	
a=	strlen(s1);
b=	strlen(s2);
c=	strlen(s3);
	printf("s1=%s \t length=%d characters\n ",s1,a);
	printf("s2=%s \t length=%d characters\n ",s2,b);
	printf("s3=%s \t length=%d characters\n ",s3,c);
	   
}
