#include <stdio.h>
#include "cs50.h"

int get_negative_int(void);

int main(void)
{
    int i =get_negative_int();
    printf("%i", i);
}

int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("give me a negative num: ");
    }
    while (n >= 0);
    return n;
    
}