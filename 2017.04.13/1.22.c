#include<stdio.h>
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
	*/
}
	