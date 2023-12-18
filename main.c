#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    int n,i,temp;
    printf("enter size of array");
    scanf("%d",&n);
    *a =malloc(n*sizeof(int));
     for (i = 0;i<n; i++)
    {
        printf("Enter element a[%d]",i);
        scanf("%d", (a+i));
    }
        for (i = 0;i<n; i++)
    {
        printf("a[%d]=%d\n",i,*(a+i));
    }
   for (i = 0;i<n/2; i++)
    {
        temp = *(a+i);
        *(a+i) =*(a+n - i - 1);
        *(a+n-i-1)= temp;
    }
     printf("after reverse\n");
     for (i = 0;i<n; i++)
    {
        printf("a[%d]=%d \n",i,*(a+i));
    }

}
