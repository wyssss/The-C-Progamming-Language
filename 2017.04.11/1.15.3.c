#include<stdio.h>
void convert(int m,int n);
int main()
{   int lower=0;
    int upper=300;
	convert(lower,upper);
	return 0;
}
void convert(int lower,int upper)
{
	int fahr,celsius;
	int step=20;
	fahr=lower;
	while(fahr<=upper){
		celsius=5*(fahr-32)/9;
		printf("%d\t%d\n",fahr,celsius);
		fahr=fahr+step;
	}
}
