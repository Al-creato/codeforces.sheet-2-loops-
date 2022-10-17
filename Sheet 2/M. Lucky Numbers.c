#include <stdio.h>

int main()
{
    int a,b, rem, c=0;
    scanf("%d%d", &a,&b);
    for(int i=a; i<=b; i++)
    {
        int q=i;
        int flag=1;
        while(q!=0)
        {
            rem=q%10;
            if(rem!=4 && rem!=7)
                flag=0;
            q=q/10;
        }
        if(flag==1)
        {
            printf("%d ",i);
            c++;
        }
    }
    if(c==0)
        printf("-1");
}
