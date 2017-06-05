#include <stdio.h>  
  
#define     TABINC      8   //定义每个TABINC(8)个位置会出现一个制表位  
  
int main()  
{  
    int c, nb, pos;  
  
    nb = 0;             //到遇到制表符时，到达下个制表位需要的空格数  
    pos = 1;            //程序在文本行的当前位置  
    while((c = getchar()) != EOF)  
    {  
        if(c == '/t')  
        {  
            nb = TABINC - (pos - 1)%TABINC;  
            while(nb > 0)  
            {  
                putchar(' ');  
                ++pos;  
                --nb;  
            }  
        }  
        else if(c == '/n')  
        {  
            putchar(c);  
            pos = 1;  
        }  
        else  
        {  
            putchar(c);  
            ++pos;  
        }  
    }  
  
    return 0;  
}  