/*#include<stdio.h>
#define MAX 1000
int getline(char line[],int word);
void crack(char to[],int length);//将输入行中过长的字符折断
main()
{
	char line[MAX];
	char tostring[MAX];
	char matrix[MAX][MAX]={""};
	int lens;//接收输入行中字符串的长度
	int i=0;//用来计算二维数组的长度
	int j=0;
	int k=0;//用来输出二维数组
	while((lens=getline(line,MAX))>0)
		if(i<MAX){	
			crack(tostring,lens);
			for(j=0;j<=lens+1;j++){
				matrix[i][j]=tostring[j];
			}
			i++;
		}
		printf("after crack the string is:\n");
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
void crack(char to[],int length)
{	int i;	
	if(length>20&&length<30){
		to[length+1]='\0';
		for(i=length;i>length/2;i--){
			to[i]=to[i-1];
		}
		to[length/2]='\n';
	}else if(length>=30){
		to[length+1]='\0';
		for(i=length+1;i>(length/3)*2;i--){
			to[i]=to[i-1];
		}
		to[(length/3)*2]='\n';
		for(i=(length/3)*2+1;i>(length/3);i--){
			to[i]=to[i-1];
		}
		to[length/3]='\n';
	}


    /*int i;
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

}	*/
//NeroHwang
//2014-2-27

#include <stdio.h>
#include<assert.h>
#define MAXLINE 1000
const int MAXFOLD = 10; //Limit the max fold pos as 10
int GetLine(char line[],int maxline);

int main(void)
{
    //1,i_current,indicate the current index of the whole string.
    //2,i_location,indicate the current pos in a line
    int i_current,i_location;
    int len;
    int i_spaceHolder;       //Hold for the current pos which is a blank' '
    char line[MAXLINE];
    if((len = GetLine(line,MAXLINE)) >0)
    {
        if(len < MAXFOLD)
        {
            //do nothing
        }
        else
        {
            //there is some extra long lines
            i_current = 0;
            i_location = 0;
            while(i_current < len)
            {
                if(line[i_current] == ' ')
                {
                    i_spaceHolder = i_current;
                }
                if(i_location == MAXFOLD)      //As soon as we find the pos needs to be folded...
                {
                    line[i_spaceHolder] = '\n';
                    i_location = 0;          //Reposition
                }
                ++i_current;
                ++i_location;
            }
        }
        printf("%s\n",line);
    }
    return 0;
}

int GetLine(char line[],int maxline)
{
   
    char c;
    int i;//Atention Here.Don't use getchar twice in for loop. 
	assert(line != NULL && maxline <= MAXLINE && maxline >0);
    for(i = 0; i <  maxline-1 && (c=getchar())!= EOF && c!= '\n'; ++i)
    {
        line[i] = c;
    }
    if(c =='\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}	