#include <stdio.h>
int main()
{
    int n,i, arr[1000];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    for(i=1; i<n; i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    printf("%d\n", max);
}
