#include<stdio.h>
#define MAX 1000
int getline(char s[],int lens);//用来获取输入行删除空格后字符串的长度，以及删去字符串数组的末尾空格
main()
{   
	int i=0;//用来将字符串输入到二维数组中
	int j=0;//用来计算二维数组的行数
	int k=0;//用来输出二维数组
	int len;
	char word[MAX];
	char matrix[MAX][MAX]={""};//用来保存删去末尾空格的字符串数组
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
{   int j=0;//用来计算删除空格后字符串的长度
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


 