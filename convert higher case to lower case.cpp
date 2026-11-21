#include<stdio.h>
#include<string.h>
main()
{
	char ch[20];
	int l=0,i;
	printf("enter string");
	gets(ch);
	for(int i=0;i<ch[i]!='\0';i++)
	{
		l++;
	}
	for(i=0;i<l;i++)
	{
		if(ch[i]>='a'&&ch[i]<='z')
		{
			ch[i]-=32;
		}
	}
	printf("%s",ch);
}
