#include <stdio.h>
#define ll long long int
int main()
{
    ll x;
    scanf("%lld", &x);
    for (int i = 0; i < x; i++)
    {
        ll n;
        scanf("%lld", &n);
        ll j = n, fact = 1;
        while (j >= 1)
        {
            fact = fact * j;
            j--;
        }
        printf("%lld\n", fact);
    }
}
