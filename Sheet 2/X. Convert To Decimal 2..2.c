#include <stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,count=0;
        scanf("%d",&n);
        while(n)
        {
            int y=n%2;
            n=n/2;
            if(y==1)
                count++;
        }
        int s=pow(2,count)-1;
        printf("%d\n",s);
    }
}
