#include<stdio.h>
#include<string.h>
void squeeze(char s[],char q[]);
int main()
{   char str[]="abcd";
    char qtr[]="abc";
	squeeze(str,qtr);
	printf("%s",str);
	return 0;
}
void squeeze(char s[],char q[])
{
	int i,j,k,c;
	for(i=0;q[i]!='\0';i++)
	{	c=q[i];
	for(j=k=0;s[j]!='\0';j++)
		if(s[j]!=c)
			s[k++]=s[j];
		s[k]='\0';
	}
}