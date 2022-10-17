#include<stdio.h>
int main()
{
    int x, count=0;
    scanf("%d", &x);
    for(int i=2; i<x; i++)
    {
        if(x%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0 && x!=1)
        printf("YES");
    else
        printf("NO");
}

 
