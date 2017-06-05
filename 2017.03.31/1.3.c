#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void rands(int *a,int n)
{ int i;
	srand( time(NULL));
	for( i=0;i<n;i++)
	{
		a[i]=rand()%1000;
	}
   return;

}
void Bubble_sort(int *a,int n)
{int i,j,temp;
for(i=0;i<n;i++)
{
	for(j=0;i+j<n-1;j++)
	{

		if(a[j]>a[j+1])
		{
			 temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
  
}}
int main()
{
	int a[1000];
rands(a,1000);
Bubble_sort(a,1000);
printf("%d\n",a[500]);
return 0;
}

