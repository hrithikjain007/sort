#include<stdio.h>
#include<stdlib.h>
void bubble(int *a,int n)
{
   int i,j,t;
  for(i=0;i<n-1;i++)
	{

	for(j=0;j<n-1-i;j++)
	        {
			if(a[j]>a[j+1])
			{
			    t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
			
		}
	}  
       for(i=0;i<n;i++)
	printf("%d",a[i]);
}
