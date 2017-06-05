#include<stdio.h>
#define MAX 1000
int getline(char word[],int line);
int main()
{   int i=0;
    int j;
	int k;
	int len;
	char word[MAX];
	char matrix[MAX][MAX];
	while((len=getline(word,MAX))>0){
		if(i<MAX)
			for(j=0;j<len;j++)
			{
				matrix[i][j]=word[j];
			}
			i++;
	}
	for(k=0;k<i;k++)
		printf("%s",matrix[k]);
    return 0;
}
int getline(char s[],int line)
{
	int i=0;
	int j=0;
	int c;
	while((c=getchar())!=EOF&&c!='\n'){
		if(i<MAX){
		  s[j]=c;
		  j++;
		}
		i++;
	}
    if(c == '\n'){
    while((' ' == s[--j]) || ('\t' == s[--j]) ){
      i--;  
    }       
    s[j] = c;
    j++;
    i++;
  }
  s[j] = '\0';
  return i;

	
}

