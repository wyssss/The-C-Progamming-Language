#include<stdio.h>
#define MAX 1000
int getline(char line[],int word);
void reverse(char to[],char from[]);//���������е��ַ��ߵ�
main()
{
	char line[MAX];
	char copy[MAX];
	char matrix[MAX][MAX]={""};
	int lens;//�������������ַ����ĳ���
	int i=0;//���������ά����ĳ���
	int j=0;
	int k=0;//���������ά����
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
	int j=0;//���ַ�����˳���Ƶ�copy������
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
	



