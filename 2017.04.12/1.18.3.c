#include<stdio.h>
#define MAX 1000
int getline(char s[],int lens);//������ȡ������ɾ���ո���ַ����ĳ��ȣ��Լ�ɾȥ�ַ��������ĩβ�ո�
main()
{   
	int i=0;//�������ַ������뵽��ά������
	int j=0;//���������ά���������
	int k=0;//���������ά����
	int len;
	char word[MAX];
	char matrix[MAX][MAX]={""};//��������ɾȥĩβ�ո���ַ�������
	while((len=getline(word,MAX))>0){
		if(j<MAX){
			for(i=0;i<len;i++){
			matrix[j][i]=word[i];
			}
		j++;
		}
	}
	printf("after delete space and tab the line is:\n");
	for(k=0;k<j;k++)
		printf("%s",matrix[k]);
	return 0;
}
int getline(char s[],int lens)
{   int j=0;//��������ɾ���ո���ַ����ĳ���
    int i;
	int c;
	for(i=0;i<lens&&(c=getchar())!=EOF&&c!='\n';++i){
		s[i]=c;
	  ++j;
	}
	if(c=='\n'){
 while(('s' == s[--j]) || ('\t' == s[--j]) ){
      --i;  
 }   
    j++;
	j++;
	s[j]=c;
	
    
     ++j;  //while(s[j]=='s'||s[j]=='\t')
     ++i;

        //j--;
	}
	s[j]='\0';
    return i;
}


 