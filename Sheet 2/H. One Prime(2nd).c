#include<stdio.h>
#include<math.h>
int main()
{
    int x, val1;
    scanf("%d", &x);
    val1=ceil(sqrt(x));
    int val2=x, count=0;
    for(int i=2; i<=val1; i++)
    {
        if(val2%i==0)
            count=1;
    }
    if((count==0 && val2!=1) || val2==2 || val2==3)
        printf("YES");
    else
        printf("NO");
}
