#include<stdio.h>
#include<string.h>
main()
{
	char ch[20];
	int l=0;
	printf("Enter string ");
	gets(ch);
	for(int i=0;i<ch[i]!='\0';i++)
	{
		l++;
	}
	printf("%s",ch);
}
