#include<stdio.h>
#include<string.h>
void any(char s1[],char s2[],char s3[]);
int main()
{
	char str[]="abc";
	char qtr[]="abcd";
	char store[10]="";
	any(str,qtr,store);
	printf("%s",store);
	return 0;
}
void any(char s1[],char s2[],char s3[])
{
	int i,j,k,l,c;
	for(i=0;s2[i]!='\0';i++)
	{	c=s2[i];
	for(j=k=0;s1[j]!='\0';j++)
		if(s1[j]==c)
		for(l=0;l<10;l=l+3)
		{
			s3[l]=c;
			s3[l+1]="\t";
			s3[l+2]=j;
		}

	}
}

