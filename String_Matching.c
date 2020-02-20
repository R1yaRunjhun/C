#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,flag=0,count=0;
	char str1[50],str2[50];
	printf("enter first string\n");
	gets(str1);
	printf("enter the string to be matched\n");
	gets(str2);
	for(i=0;i<strlen(str2);i++)
	{
		for(j=0;j<strlen(str1);j++)
		{
			if(str1[j]==str2[i])
			{
				flag=1;
				count++;
			}
		}
	}
	if(flag&&count==strlen(str2))
	{
		printf("string matched");
	}

	else
	{
		printf("string not matched");
	}
	
	
}
