#include<stdio.h>
void PrintOut(unsigned int N)
{
	if(N>=10)
	PrintOut(N/10);
	PrintDigit(N%10);
}
void PrintDigit(unsigned int N)
{
	printf("%d",N);
}
int main()
{
int	N=2376;
PrintOut(N);
return 0;


}