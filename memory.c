#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h> 

int main(void)
{
    int *x = malloc(3 * sizeof(int));

    x[0]= 44;
    x[1]= 55;
    x[2]= 54;

    free(x);
}