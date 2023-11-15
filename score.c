#include <stdio.h>
#include "cs50.h"
#include <string.h>

int main(void)
{
    int n =get_int("how many scores? ");

    int scores[n];
    float sum = 0;

    for (int i =0; i < n; i++)
    {
        scores[i] = get_int("score ");
        sum = sum + scores[i];
    }
    printf("Average: %f\n", sum / n);
}

