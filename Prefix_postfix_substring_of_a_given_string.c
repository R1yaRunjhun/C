#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,count;
	char str[100];
	char stro[100];
	printf("enter the string\n");
	gets(str);
	printf("prefixes are:\n");
	for(i=0;i<strlen(str);i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",str[j]);
		}
		printf("\t");
	}
	printf("\npostfixes are:\n");
	for(i=strlen(str)-1;i>=0;i--)
	{
		for(j=i;j<=strlen(str);j++)
		{
			printf("%c",str[j]);
		}
		printf("\t");
	}
	printf("\nsubstring are:\n");
	for(i=0;i<strlen(str);i++)
	{
		for(j=i;j<strlen(str);j++)
		{
			for(k=i;k<=j;k++)
			{
				printf("%c",str[k]);
			}
			printf("\t");
		}
	}
	
/*	printf("\nsubsequence are:\n");
	for(count=0;count<strlen(str);count++)
	{
		for(i=0;i<strlen(str);i++)
		{
			k=0;
			for(j=i;k<=count&&j<strlen(str);j++)
			{
				printf("%c",str[j]);
				k++;
			}
			printf("\t");
		}
	}*/

}
