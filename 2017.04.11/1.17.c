#include<stdio.h>
#define MAXL 80
#define MAXLINE 1000
int getline(char line[]);
int copyarray(char line[]);
int main()
{
	int len;
	char line[MAXLINE];
	char arrayeight[MAXLINE];
	while((len=getline(line))>0){
		if(len>80){
			copyarray(line);
		}

	}
			printf("%s",arrayeight);
			return 0;
		
}
int getline(char s[])
{
	int c,i;
	for(i=0;(c=getchar())!=EOF&&c!='\n';++i)
		s[i]=c;
	if(c=='\n'){
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}
int copyarray(char line[])
{  int i;
   int c;
   char arrayeight[MAXLINE];
   int j=0;
	for(i=0;(c=arrayeight[i])!=EOF;++i)
		if(line[j]!='\0')
		arrayeight[i]=line[++j];
}
		

