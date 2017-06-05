/*#include<stdio.h>
#define MAX 52


int main()
{
	int length[52];
	int c;
	int i;
	while((c=getchar()!=EOF){
		if(c>='a'&&c<='c'||c>='A'&&c<='z')
*/
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
}