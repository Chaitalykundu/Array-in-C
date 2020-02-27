#include<stdio.h>
int main()
{
    int a[20],i;
    printf("Enter ten no's: ");
    for(i=0; i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<10;i++)
    {
         printf("%d ",a[i]);
    }
}
