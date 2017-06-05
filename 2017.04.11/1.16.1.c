/*#include<stdio.h>
#define MAXLINE 1000
int getline(char line[],int maxline);
void copy(char to[],char from[]);
main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max=0;
	while((len=getline(line,MAXLINE))>0)
		if(len>max){
			max=len;
			copy(longest,line);
		}
		if(max>0)
			printf("%s",longest);
		return 0;
}
int getline(char s[],int lim)
{
	int c,i;
	for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';++i)
		s[i]=c;
	if(c=='\n'){
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}
void copy(char to[],char from[])
{
	int i;
	i=0;
	while((to[i]=from[i])!='\0')
		++i;
}
*/
#include <stdio.h>
 
#define MAXLINE 1000 /* maximum input line size */
 
int getline(char line[], int maxline);
void copy(char to[], char from[]);
 
/* print longest input line */
int main(void)
{
  int len;               /* current line length */
  int max;               /* maximum length seen so far */
  char line[MAXLINE];    /* current input line */
  char longest[MAXLINE]; /* longest line saved here */
 
  max = 0;
 
  while((len = getline(line, MAXLINE)) > 0)
  {
    printf("%d: %s", len, line);
 
    if(len > max)
    {
      max = len;
      copy(longest, line);
    }
  }
  if(max > 0)
  {
    printf("Longest is %d characters:\n%s", max, longest);
  }
  printf("\n");
  return 0;
}
 
/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
  int c, i, j;
 
  for(i = 0, j = 0; (c = getchar())!=EOF && c != '\n'; ++i)
  {
    if(i < lim - 1)
    {
      s[j++] = c;
    }
  }//����getline�޸ĺ�i���Դ���lim���ƣ�ֻ�������������ַ���
  if(c == '\n')
  {
    if(i <= lim - 1)
    {
      s[j++] = c;
    }
    ++i;
  }
  s[j] = '\0';
  return i;
}
 
/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void copy(char to[], char from[])
{
  int i;
 
  i = 0;
  while((to[i] = from[i]) != '\0')
  {
    ++i;
  }
}