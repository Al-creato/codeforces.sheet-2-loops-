#include <stdio.h>
int main()
{
    int i, n,arr[1000], c1=0, c2=0, c3=0, count=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            c1++;
        }
        if(arr[i]%2!=0)
        {
            c2++;
        }
        if(arr[i]>0)
        {
            c3++;
        }
        if(arr[i]<0)
        {
            count++;
        }
    }
    printf("Even: %d\n", c1);
    printf("Odd: %d\n", c2);
    printf("Positive: %d\n", c3);
    printf("Negative: %d\n", count);
}
