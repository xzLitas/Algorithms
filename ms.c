#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(int * a,int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void show(int * a,int n)
{
	for(int i =0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
