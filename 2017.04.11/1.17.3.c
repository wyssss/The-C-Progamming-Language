/*打印长度大于80个字符的所有输入行*/    
#include <stdio.h>    
#define MAXLINE 1000   
#define LONGLINE 80   
int getline(char line[],int maxline);   
main()    
{    
    int len;  //当前行长度     
    char line[MAXLINE];  //当前输入行   
  
    while((len=getline(line,MAXLINE))>0)     
    {   
    if(len>LONGLINE)   
      printf("%s",line);  //尽可能多的打印输入行的长度与保存的数组   
   }  
   return 0;  
}  
 /*输入一行，并返回其长度*/      
 int getline(char s[],int lim)      
 {      
    int c,i,j;      
    j=0;    //j记录复制到字符串s中字符的个数     
    for(i=0;(c=getchar())!=EOF&&c!='\n';i++)  //不再检查字符数是否超出数组s的限制     
        if(i<lim-2)   //数组s的最后一个下标是lim-1；     
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
    s[j]='\0';  //字符串末尾以'\0'为结尾不能漏了       
    return i;      
 }      