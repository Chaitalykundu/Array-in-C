/* Accept ten no's print the even no's in an array */

#include<stdio.h>
int main()
{
    int a[20],i;
    printf("Enter ten no's: ");
    for(i=0; i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            printf("%d ",a[i]);
    }
}
