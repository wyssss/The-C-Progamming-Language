/*��ӡ���ȴ���80���ַ�������������*/    
#include <stdio.h>    
#define MAXLINE 1000   
#define LONGLINE 80   
int getline(char line[],int maxline);   
main()    
{    
    int len;  //��ǰ�г���     
    char line[MAXLINE];  //��ǰ������   
  
    while((len=getline(line,MAXLINE))>0)     
    {   
    if(len>LONGLINE)   
      printf("%s",line);  //�����ܶ�Ĵ�ӡ�����еĳ����뱣�������   
   }  
   return 0;  
}  
 /*����һ�У��������䳤��*/      
 int getline(char s[],int lim)      
 {      
    int c,i,j;      
    j=0;    //j��¼���Ƶ��ַ���s���ַ��ĸ���     
    for(i=0;(c=getchar())!=EOF&&c!='\n';i++)  //���ټ���ַ����Ƿ񳬳�����s������     
        if(i<lim-2)   //����s�����һ���±���lim-1��     
        {    
            s[j]=c;    
            j++;    
        }     
    if(c=='\n')      
       {      
        s[j]=c;    
         j++;      
         i++;      
         }      
    s[j]='\0';  //�ַ���ĩβ��'\0'Ϊ��β����©��       
    return i;      
 }      