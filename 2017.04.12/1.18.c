#include<stdio.h>  
//#include<stdlib.h>  
#define MAXLINE 1000  
int getline(char s[], int lim);  
int main(){  
    int len,i;  
    char line[MAXLINE];  
    while( (len = getline(line,MAXLINE))> 0){     //�������δ����������� ,lenΪ�����еĳ���    
        //printf("%s",line);  
       for(i = 0; i < len; i++)  //��ӡ������   
         printf("%c",line[i]);  
       //printf("\n");  
    }     
    //system("pause");  
   return 0;      
}  
int getline(char s[], int lim){  
    int i,j,len;  
    char c;  
    for(i = 0; i  < lim - 1 && (c = getchar())!= EOF && c != '\n'; i++)  
        s[i] = c;  
    if(c == '\n'){  
        s[i] = c;  
        i++;  
    }      
      
    s[i] = '\0';  
      
    len = i;//len��ʾ�ַ����ĳ���   
    //���ַ�����ĩβ��ʼ����,������ĩβ�ǿո��Ʊ��,������������ȫ�ǿո�����   
    for(j = i - 1; j >= 0;j--){  
        if(s[j] != ' ' && s[j] != '\t') //������ַ���ĩβ��ʼ,��������' '�Ҳ���'\t'   
           break;                       //������ѭ��,�������   
        if(s[j] == ' ' || s[j] == '\t') //�������' '����'\t',���ַ����ĳ���--   
           len--;   
    }  
    return len;  
}  