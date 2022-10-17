#include <stdio.h>
int main()
{
    int n,a,b,rem,sum=0;
    scanf("%d%d%d",&n,&a,&b);
    for(int i=1; i<=n; i++)
    {
        int x=i, s=0;
        while(x!=0)
        {
            rem=x%10;
            s=s+rem;
            x=x/10;
        }
        if(a<=s && s<=b)
            sum=sum+i;
    }
    printf("%d",sum);
}
 
