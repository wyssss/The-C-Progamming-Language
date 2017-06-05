#include<stdio.h>
#define MAXL 20
#define MAXLINE 1000
int getline(char line[]);
void copyarray(char arrayeight[],char line[]);
int main()
{
	int len;
	char line[MAXLINE];
	int i;
	char arrayeight[MAXLINE];
	for(i=0;i<MAXLINE;i++){
		arrayeight[i]=NULL;
	}
	while((len=getline(line))>0){
		if(len>MAXL){
			copyarray(arrayeight,line);
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
void copyarray(char arrayeight[],char line[])
{  int i=0;
   int j=0;
   while(arrayeight[i]!=NULL){
	   i++;
	   
   }
    while(line[j]!='\0'){
     arrayeight[i++]=line[j++];
		
	   }
   
}
		

