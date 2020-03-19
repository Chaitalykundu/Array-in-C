/* Accept 10 numbers and remove any search element from an array and place the next number in this empty index */
/* If elements are 0,1,2,3,4,5,6,7,8,9 and the search element is 4, then the new array elements will be 0,1,2,3,5,,6,7,8,9 */

#include<stdio.h>
int main()
{
    int a[10],n,i,j,max=10;

    printf("Enter the array elements: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the search value: ");
    scanf("%d",&n);
     for(i=0;i<max;i++)
     {
         if(a[i]==n)
         {
             for(j=i;j<max-1;j++)
             {
                a[j]=a[j+1];
             }
             max--;
         }

     }
     for(i=0;i<max;i++)
     {
        printf("%d ",a[i]);
     }
}

