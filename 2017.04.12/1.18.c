#include<stdio.h>  
//#include<stdlib.h>  
#define MAXLINE 1000  
int getline(char s[], int lim);  
int main(){  
    int len,i;  
    char line[MAXLINE];  
    while( (len = getline(line,MAXLINE))> 0){     //如果还有未处理的输入行 ,len为输入行的长度    
        //printf("%s",line);  
       for(i = 0; i < len; i++)  //打印输入行   
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
      
    len = i;//len表示字符串的长度   
    //从字符串的末尾开始处理,输入行末尾是空格及制表符,并且输入行完全是空格的情况   
    for(j = i - 1; j >= 0;j--){  
        if(s[j] != ' ' && s[j] != '\t') //如果从字符串末尾开始,遇到不是' '且不是'\t'   
           break;                       //则跳出循环,处理结束   
        if(s[j] == ' ' || s[j] == '\t') //如果遇到' '或者'\t',则将字符串的长度--   
           len--;   
    }  
    return len;  
}  