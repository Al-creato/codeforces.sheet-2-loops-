#include<stdio.h>
int main()
{
    int num, rem;
    scanf("%d", &num);
    int result=0;
    while(num!=0)
    {
        rem=num%10;
        result = result * 10 + rem;
        num=num/10;
    }

    printf("%d\n", result);
    if(result==num)
        printf("YES");
    else
        printf("NO");
}
