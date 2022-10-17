#include <stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, p=0, s=0;
        scanf("%d",&n);
        while(n)
        {
            int y=n%2;
            n=n/2;
            if(y==1)
            {
                s+=pow(2,p);
                p++;
            }
        }
        printf("%d\n",s);
    }
}
