#include<stdio.h>
#define MAX 1000
int getline(char line[],int word);
void reverse(char to[],char from[]);//将输入行中的字符颠倒
main()
{
	char line[MAX];
	char copy[MAX];
	char matrix[MAX][MAX]={""};
	int lens;//接收输入行中字符串的长度
	int i=0;//用来计算二维数组的长度
	int j=0;
	int k=0;//用来输出二维数组
	while((lens=getline(line,MAX))>0)
		if(i<MAX){	
			reverse(copy,line);
			for(j=0;j<=lens;j++){
				matrix[i][j]=copy[j];
			}
			i++;
		}
		printf("after rsverse the string is:\n");
		for(k=0;k<i;k++)
		{
			printf("%s",matrix[k]);
		}
		return 0;
}
int getline(char s[],int word)
{   int c;
    int i;
    for(i=0;(c=getchar())!=EOF&&c!='\n';++i)
		s[i]=c;
	if(c=='\n'){
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}
void reverse(char to[],char from[])
{	int i;
	int j=0;//将字符串反顺序复制到copy数组中
	for(i=0;from[i]!='\n';i++)
		;
	i--;
	while(i>=0){
		to[j++]=from[i--];
	}
	to[j]='\n';
	j++;
	to[j]='\0';
}
	



