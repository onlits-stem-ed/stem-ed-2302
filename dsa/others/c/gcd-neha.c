#include <stdio.h>

int main(void)
{
    int a=24, b=30;
    while(a != b)
    {
        if(a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    printf("GCD of two integers 24 and 30 is %d.\n", b);
    return 0;
}