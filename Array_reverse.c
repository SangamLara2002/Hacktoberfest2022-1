#include<stdio.h>
void main()
{int a[]={2,9,0,2,7,11,34,4};
int i,n,temp;
n=sizeof(a)/sizeof(a[0]);
printf("Array before reversing\n");
for(i=0;i<n;++i)
{
printf("%d ",a[i]);
}
for(i=0;i<n/2;++i)
{
temp=a[i];
a[i]=a[n-1-i];
a[n-1-i]=temp;
}
printf("Array after reversing\n");
for(i=0;i<n;++i)
{
printf("%d ",a[i]);
}
}
