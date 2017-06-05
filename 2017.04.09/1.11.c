#include<stdio.h>
#define IN 1
#define OUT 0
main()
{
	int c,nl,nw,nc,state;

	state=OUT;
	nl=nw=nc=0;
	while((c=getchar())!=EOF){
		++nc;
		if(c=='\n')
			++nl;
		if(c==' '||c=='\n'||c=='\t')
			state=OUT;
		else if(state==OUT){
			state=IN;
			++nw;	
		}	
		if(c==' '){
			printf("\n");
		}
		else{
			putchar(c);
		}

	}
	printf("%d %d %d\n",nl,nw,nc);
}
/*#include <stdio.h>

main()
{  int c,state;
   while((c=getchar())!=EOF){
      if(c==' '||c=='\n'||c=='\t'){
        printf("\n");
      }
      else {
          putchar(c);

      }
   }
}*/