#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,add=0;
    scanf("%d",&n);
    int a[n],i;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       if(i%2==0)
       sum=sum+a[i];
       else
       add=add+a[i];
    }
    printf("%d",abs(sum-add));
}