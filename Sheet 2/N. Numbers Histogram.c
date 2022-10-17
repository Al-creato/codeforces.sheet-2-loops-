#include <stdio.h>
int main()
{
    char ch[30];
    int t, n;
    gets(ch);
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        for(int i=1; i<=n; i++)
        {
            printf("%s",ch);
        }
        printf("\n");
    }
}
