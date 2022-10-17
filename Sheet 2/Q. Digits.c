#include <stdio.h>
int main()
{
    int t, n, rem, count=0;
    scanf("%d",  &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        if(n==0)
            count=1;
            int x=n;
        while(x!=0)
        {
            rem=x%10;
            printf("%d ",rem);
            x=x/10;
        }
        if(count==1)
            printf("0");
        printf("\n");
        count =0;
    }
}
