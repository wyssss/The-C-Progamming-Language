#include<stdio.h>
#define MAX 20 
#define OUT  1
#define IN 0
int main()
{
	int length[MAX];
	int word=0;
	int c;
	int i;
	for(i=0;i<MAX;i++)
		length[i]=0;
	while((c=getchar())!=EOF){
		if(c>='a'&&c<='z'||c>='A'&&c<='Z'||c=='-'){
			word++;
		}else{
			length[word]++;
			word=0;
		}
	}
	for(word=0;word<MAX;word++){
	   if(length[word]!=0){
		   printf("%2d ",word);
	   

		   for(i=1;i<=length[word];i++){
			   putchar('*');
		   }
		  putchar('\n');
	   }
	}
}
/*
# include <stdio.h>
# define MAX 20
# define OUT 0
# define IN 1

int main(void)
{
	int length[MAX];
	int c;
	int vocl = 0;
	int state = OUT;
	int i;
	
	for(vocl = 0; vocl < MAX; vocl++){
		length[vocl] = 0;
	}
	vocl = 0; 
	while((c = getchar()) != EOF){
		if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c == '-'){
			vocl++;
		} else{
			length[vocl]++;
			vocl = 0;
		}
	}

	for(vocl = 0; vocl < MAX; vocl++){
		if(length[vocl] != 0){
			printf("%2d  ", vocl);
			for(i = 1; i <= length[vocl]; i++){
				putchar('*');
			}
			putchar('\n');
		}
	}
}	*/