#include<stdio.h>
int swap_a(int *arr,int lb,int end)
  {
          
          int temp;
          temp = arr[lb];
          arr[lb] = arr[end];
          arr[end] = temp;
          return 0;
  }

int partition(int *a,int lb,int ub)
{
	int pivot = a[lb],start = lb,end = ub;
	while(start<=end)
	{
		while(pivot>=a[start])
			start++;
		while(pivot<a[end])
			end--;
		if(start<end)
			swap_a(a,start,end);
	}
	swap_a(a,lb,end);
	return end;
}


        
void quick_sort(int *a,int lb,int ub,int n)
{
	int loc,i;
	if(lb<ub)
	{
		loc = partition(a,lb,ub);
		quick_sort(a,lb,loc-1,n);
		quick_sort(a,loc+1,ub,n);

	}
   
   
   
  
   


}
void print(int *a,int n)
{
int i;
   for(i=0;i<n;i++)
	printf(" %d ",a[i]);
}


