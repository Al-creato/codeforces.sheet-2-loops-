#include <stdio.h>
int main()
{
    int ipin=1999, pin;
    scanf("%d", &pin);
    while(pin!=ipin)
    {
        printf("Wrong\n");
        scanf("%d", &pin);
    }
    if(ipin==pin)
        printf("Correct");
}
 
