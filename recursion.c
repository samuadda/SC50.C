#include <stdio.h>
#include "cs50.h"

void draw(int n);

int main(void)
{
    int hieght = get_int("hieght? ");

    draw (hieght);
}

void draw(int n)
{
    if ( n <= 0)
    {
        return;
    }
    draw(n-1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}