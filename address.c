#include <stdio.h>

// STRING DATA TYPE
typedef char *string ;

int main(void)
{
    int numbers[] = {4, 4, 6, 7, 8, 9, 3};

    printf("%i\n", *numbers);
    printf("%i\n", *(numbers+1));
    printf("%i\n", *(numbers+2));
    printf("%i\n", *(numbers+3));
    printf("%i\n", *(numbers+4));
    printf("%i\n", *(numbers+5));
    printf("%i\n", *(numbers+6));

}

