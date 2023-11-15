#include <stdio.h>
#include "cs50.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char *c = get_string("c: ");
    
    char *h = malloc(strlen(c));

    if (h == NULL)
    {
        return 1;
    }

    strcpy(h, c);
    h [0] = toupper(h[0]);

    printf("%s ", c);
    printf("%s", h);

    free(h);
}