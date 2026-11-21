#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	int l=0,i;
	printf("Enter string ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}

	for(i=0;i<l;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
		    str[i]=str[i]+32;
		}
	}
	printf("%s",str);
}
