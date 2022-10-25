 #include"header.h"
#include<stdlib.h>
#include<stdio.h>
void main()
{
int n,a[100],op,i;
printf("\nenter the number of elements\n");
scanf("%d",&n);
printf("\nenter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
while(1)
{
printf("\n enter the optiom   1)seletion  2)  bubble 3)insertion 4)quick  0)exit\n");
scanf("%d",&op);
 switch(op)
  {
   case 1: seletion(a,n);break;
   case 2: bubble(a,n);break;
   case 3: insert(a,n);break;
   case 4: quick_sort(a,0,n-1,n);print(a,n);break;
   case 0: exit(0);
   }
}
      

}
