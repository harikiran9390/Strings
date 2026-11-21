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
	for(int i=0;i<l-1;i++)
	{
		for(int j=i+1;j<l;j++)
		{
			if(ch[i]>ch[j])
			{
				int temp=ch[i];
				ch[i]=ch[j];
				ch[j]=temp;
			}
		}
	}
	printf("%s",ch);
}
