#include<stdio.h>
#include<stdlib.h>
void main()
{
	int c,nl,space_n;
	nl=space_n=0;
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
			++nl;
		else if(c==' ')
			++space_n;
	}
	printf("%d,%d",nl,space_n);
}