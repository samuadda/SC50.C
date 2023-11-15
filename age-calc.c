#include <stdio.h> 
#include "cs50.h"

int main(void)
{ 
        string name =get_string("Hi waht's your name? ");
        string m = ("male");
        string f = ("female");

        printf("Well hello, %s", name);
        int age =get_int(" So how old are you? ");

        if (age <= 30){
                printf ("you are young wow,");
        }
        else {
                printf("wow you are an experinced,");
        }

        string county = get_string(" and where are you from? ");
        printf("welcome %s", name );
        printf("and all our fans from %s", county);

        char gender =get_char("Now tell us your :-) gender by single letter M or F");

        if ( gender = m) {
                printf("Hello blue,");
        }
        else if ( gender = f)
        {
                printf("Hello pink");
        }
        
}

// how to compile //
// gcc filename.c cs50.c -o filensme//

