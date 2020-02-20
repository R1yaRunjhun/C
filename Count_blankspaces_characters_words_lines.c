#include<stdio.h>
#include<string.h>
int countblankspace(char arr[])
{
	int i,count=0;
	int l =strlen(arr);
	for(i=0;i<l;i++)
	{
		if(arr[i]==' ')
		{
			count++;
		}
		
	}
	return count;
}
int countcharacter(char arr[])
{
	int l =strlen(arr);
	
	return l;
	
}
int countlines(char arr[])
{
	int i,count=1;
	int l =strlen(arr);
	for(i=0;i<l;i++)
	{
		if(arr[i]=='\n')
		{
			count++;
		}
		
	}
	return count;
	
}
int countwords(char arr[])
{
	int i,count=0;
	int l =strlen(arr);
	for(i=0;i<l;i++)
	{
		if(arr[i]==' ')
			count++;
		else if(arr[i]=='.')
			count++;
		else if(arr[i]==',')
			count++;
		else if(arr[i]=='\n')
			count++;
		else if(arr[i]=='\t')
			count++;
		
	}
	return count;
		
}
int main()
{
	int blankspace,character,word,line; 
	char array[100];
	printf("enter the string\n");
	gets(array);
	printf("%s",array);
	blankspace=countblankspace(array);
	printf("\nno. of blankspace is %d",blankspace);
	character=countcharacter(array);
	printf("\nno. of character is %d",character);
	word=countwords(array);
	printf("\nno. of words is %d",word);
	line=countlines(array);
	printf("\nno. of lines is %d",line);
	return 0;
	
}
