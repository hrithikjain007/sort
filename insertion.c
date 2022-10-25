#include"header.h"
#include<stdio.h>
#include<stdlib.h>
void insert(int *a,int n)
{
int i,j,t,k;
for(i=1;i<n;i++)
  {   t=a[i];
	for(j=i-1;j>=0;--j)
	{
	     if(a[j]<t)
		{
		  k=a[j];
			a[j]=a[j+1];
			a[j+1]=k;
		}
		}
	}
   for(i=0;i<n;i++)
   printf(" %d ",a[i]);
  }

