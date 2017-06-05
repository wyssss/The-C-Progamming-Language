#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
  
signed int buff[32]={0};  
  
void any(char s1[],char s2[])  
{  
    int i,j,k=0;  
    char flag=0;  
    for(i=0;s2[i]!='\0';++i)  
    {  
        for(j=0;s1[j]!='\0' && !flag ;++j)  
        {  
            if(s2[i]==s1[j])  
            {  
                flag=1;  
            }  
        }  
        if(flag)  
        {  
            buff[k++]=j;  
        }else  
        {  
            buff[k++]=-1;  
        }  
        flag=0;       
    }  
    buff[k]='\0';  
}  
  
void main()  
{  
    int i,length;  
    char *s1[]=  
    {  
        " ",  
        "a",  
        "antidisestablishmentarianism",  
        "beautifications",  
        "characteristically",  
        "deterministically",  
        "electroencephalography",  
        "familiarisation",  
        "gastrointestinal",  
        "heterogeneousness",  
        "incomprehensibility",  
        "justifications",  
        "knowledgeable",  
        "lexicographically",  
        "microarchitectures",  
        "nondeterministically",  
        "organizationally",  
        "phenomenologically",  
        "quantifications",  
        "representationally",  
        "straightforwardness",  
        "telecommunications",  
        "uncontrollability",  
        "vulnerabilities",  
        "wholeheartedly",  
        "xylophonically",  
        "youthfulness",  
        "zoologically"  
    };  
    char *s2[]=  
    {  
        " ",  
        "a",  
        "the",  
        "quick",  
        "brown",  
        "dog",  
        "jumps",  
        "over",  
        "lazy",  
        "fox",  
        "get",  
        "rid",  
        "of",  
        "windows",  
        "and",  
        "install",  
        "linux"  
    };  
    size_t s1num=sizeof s1/sizeof s1[0];  
    size_t s2num=sizeof s2/sizeof s2[0];  
    size_t s1_num,s2_num;  
    for(s1_num=0;s1_num<s1num;s1_num++)  
    {  
        for(s2_num=0;s2_num<s2num;s2_num++)  
        {  
            any(s1[s1_num],s2[s2_num]);  
            printf("%s  %s  ",s1[s1_num],s2[s2_num]);  
            length=strlen(s2[s2_num]);  
            for(i=0;i<length;i++)  
                printf("%d ",buff[i]);  
            putchar('\n');  
        }  
    }  
}  