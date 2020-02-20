#include<stdio.h>
#include<string.h>
int main()
{ 
 	int i;
 	char a;
	printf("enter the character\n");
	scanf("%c",&a);	
	if(a>=48&&a<=57)
	{
		printf("it is a number");
	}
	else if(a>=65&&a<=91)
	{
		printf("it is a alphabet");
	}
	else if(a>=97&&a<=123)
	{
		printf("it is a alphabet");
	}
	else 
	{
		printf("it is a special symbol");
	}

	return 0;
	
}
