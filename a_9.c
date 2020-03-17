/* Accept 10 no's in an array and make sure that they are  two digit no */

#include<stdio.h>
int main()
{
    int a[10],i;
    printf("Enter the elements of the array: ");
    for(i=0;i<10;)
    {
        scanf("%d",&a[i]);
        if(a[i]>=10 && a[i]<=99)  /* check if hte no is two digit no or not */
        {
              i++;
        }
    }
    return 0;
}
