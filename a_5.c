/* Accept 10 no's in an array and display all the two digit palindrome no */

#include<stdio.h>
 int main()
{
    int a[10], i;
    printf("Enter ten no's: ");
    for(i=0;i<10;i++)
    {
        scanf("%d" ,&a[i]);
    }

    for (i=0;i<10;i++)
    {
        if((a[i]%10)==(a[i]/10))
            printf("\n %d",a[i]);
    }

