#include <stdio.h>
int main()
{
    int ipin;
    int pin=1999;
    while(pin!=ipin)
    {
        scanf("%d", &ipin);
        if(pin!=ipin)
            printf("Wrong\n");
        else
            printf("Correct\n");
    }
}
