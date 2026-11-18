#include<stdio.h>
int main()
{    int a[20],n,i;
     printf("How many elements ");
     scanf("%d",&n);
     printf("Enter %d elements");
     for(i=0; i<n; i++)
       {
         scanf("%d",&a[i]);
      
       }
     printf("forward array");
     for(i=0; i<n; i++)
       {
         printf("%d",a[i]);
       }
     Printf("bckward array");
     for(i=n-1; i>=0; i++)
       {
         printf("%d",a[i]);
        }
     return(0);
{