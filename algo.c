#include <stdio.h>
#include "cs50.h"
#include <string.h>

typedef struct 
{
    string name;
    string number;
}
person;

int main(void)
{

    person people[2];
    
    people[0] .name = "saddiq";
    people[0] .number = "+966-333-222-3";

    people[1] .name = "musa";
    people[1] .number = "+966-444-555-6";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp (people[i] .name, get_string("who are you looking for? ")) == 0  )
        {
            printf("found%s\n", people[i] .number);
            return 0;
        }
    }
    printf("not found");
    return 1;
}
