#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
void  sorts(int *a,int n)
{
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++)
		a[i]=rand()%n;
}
void Bubble_sort(int *a,int n)
{int i,j;
for(i=0;i<n;i++)
{
	for(j=0;i+j<n-1;j++)
	{

		if(a[j]>a[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}

}}
void main()
{
int a[1000];
sorts(a,1000);
Bubble_sort(a,1000);
printf("%d\n",a[500]);

}


