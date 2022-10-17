#include <stdio.h>
int main()
{
    while(1)
    {
        int a,b;
        scanf("%d%d", &a, &b);
        if(a<=0 || b<=0)
            return 0;
        else
        {
            int mini=a;
            if(mini>b)
                mini=b;

            if(mini==a)
            {
                int sum=0;
                for(int i=mini; i<=b; i++)
                {
                    printf("%d ", i);
                    sum=sum+i;
                }
                printf("sum =%d\n",sum);
            }
            else
            {
                int sum=0;
                for(int i=mini; i<=a; i++)
                {
                    printf("%d ", i);
                    sum=sum+i;
                }
                printf("sum =%d\n",sum);
            }
        }
    }

}
