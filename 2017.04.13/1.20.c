#include <stdio.h>  
  
#define     TABINC      8   //����ÿ��TABINC(8)��λ�û����һ���Ʊ�λ  
  
int main()  
{  
    int c, nb, pos;  
  
    nb = 0;             //�������Ʊ��ʱ�������¸��Ʊ�λ��Ҫ�Ŀո���  
    pos = 1;            //�������ı��еĵ�ǰλ��  
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