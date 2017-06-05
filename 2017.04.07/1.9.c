#include <stdio.h>

/*cbvoid main()
{
    int c;
	if((c=getchar())!=EOF)
	{
		if(c=='\t')
			printf("\\t");
		if(c=='\b')
			printf("\\b");
		if(c='\\')
			printf("\\\\");
		if((c!='\b')&&(c!='\t')&&(c!='\\'))
			putchar(c);
	}
}*/
int main()
{
 int c;
 while((c = getchar())!=EOF)
 {
  if(c == '\t')
  {
   putchar('\\');
   putchar('t');

   //printf("\\t");
  }
  else if(c == '\b')
  {
   putchar('\\');
   putchar('b');

   //printf(\\b);
  }
  else if(c == '\\')
  {
   putchar('\\');
   putchar('\\');

   //printf(\\\\);
  }
  else
  {
   putchar(c);
  }
 }

 return 0;
}   

