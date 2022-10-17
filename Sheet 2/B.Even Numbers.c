#include <stdio.h>
int main()
{
    int n, c=-1;
    scanf("%d", &n);
    if(n==1)
        printf("%d",c);
    for(int i=2; i<=n; i++)
    {
        if(i%2==0)
            printf("%d\n",i);
    }
}

