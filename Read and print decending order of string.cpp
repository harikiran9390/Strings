#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	int l=0,i,j,temp;
	printf("enter string ");
	gets(str);
	for(i=0;i<str[i]!='\0';i++)
	{
		l++;
	}
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(str[i]<str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	printf("%s",str);
}
