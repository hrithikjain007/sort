#include"header.h"
#include<stdio.h>
void seletion(int *a,int n)
{
int i,j,t;
 for(i=0;i<n;i++)
{
   for(j=i+1;j<n;j++)
	{
	 if(a[i]>a[j])
		{
		   t=a[i];
		   a[i]=a[j];
		    a[j]=t;	
		} 
	}
}


  for(i=0;i<n;i++)
   printf("%d",a[i]);

}
