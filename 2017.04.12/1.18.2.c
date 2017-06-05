/*#include<stdio.h>
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
			for(j=0;j<=len;j++)
			{
				matrix[i][j]=word[j];
			}
			i++;
	}
	for(k=0;k<i;k++)
		printf("%s",matrix[k]);
    return 0;
}
int getline(char s[],int cline)
{
	int i=0;
	int j=0;
	int c;
/*	for(j=0;j<cline-1&&(c=getchar())!=EOF&&c!='\n';++j)
	s[j]=c;
	if(c=='\n'){
	s[j]=c;
	++j;
	}

	while((c=getchar())!=EOF&&c!='\n'){
		if(i<cline-1){
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

* 删除每个输入行末尾的空格及制表符， 并删除完全是空格的行
*/
#include <stdio.h>
//每一行存放不超过1000个字符，最多输入不超过1000行
#define MAX 1000
int getline(char line[],int limit);
 
main()
{
  int nn;
  int i=0,j,k;
  char line[MAX];
  char saveline[MAX][MAX];
 
  while((nn = getline(line,MAX) ) > 0 ){
      if(i < MAX){
        for(j = 0;j < MAX;j++){                    /* 把满足条件的行保存到二维数组中 */
          saveline[i][j] = line[j];
        }
        i++;
      }   
  }
  printf("The new line is:\n");
  for(k = 0;k < i;k++){
    printf("%s",saveline[k]);
  }
}
 
int getline(char vline[],int vlimit)
{
  int ch;
  int i=0;
  int j=0;
  while(((ch = getchar()) != EOF) && (ch != '\n')){
    if(i < (vlimit - 1)){
      vline[j] = ch;
      j++;
    }
    i++;
  }
  if(ch == '\n'){
    while(('s' == vline[--j]) || ('\t' == vline[--j]) ){
      i--;  
    }       
    vline[j] = ch;
    j++;
    i++;
  }
  vline[j] = '\0';
  return i;
}
  
