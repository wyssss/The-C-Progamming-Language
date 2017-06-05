/*#include<stdio.h>
  main()
{
	int c,n1,n2,n3;

	n1=0;
	n2=0;
	n3=0;
	while((c=getchar())!=EOF)
	{	if(c=='\n')
			++n1;
			if(c=='\t')
				++n2;
				if(c==' ')
					++n3;
				}
				printf("%d %d %d\n",n1,n2,n3);
}*/
#include<stdio.h>
 
main()
{
    int nb, nt, nl, c;
     
    nb = 0;
    nt = 0;
    nl = 0;
 
    while ((c=getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        if (c == '\t')
            ++nt;
        if (c == '\n')
            ++nl;
    }
 
    printf("%d %d %d\n", nb, nt, nl);
}
