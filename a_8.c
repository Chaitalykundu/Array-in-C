/* Accept 10 no's in an array and reverse the position of the elements */

#include<stdio.h>
 int main()
{
    int a[10], i,temp, reverse[10];
    printf("Enter ten no's: ");
    for(i=0;i<10;i++)
    {
        scanf("%d" ,&a[i]);
    }

    for (i=0;i<10;i++)
    {
        reverse[i]=a[9-i];
        printf("\n %d", reverse[i]);
    }
}
