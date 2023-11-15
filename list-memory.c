#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc( 3* sizeof(int)); // allocating dynamic memory in the heap
    if ( list == NULL) // checking if memory not available
    {
        return 1;
    }

    list [0] = 1; // as malloc returns an array of memory so i am asingnning each element
    list [1] = 2;
    list [2] = 3;
    
    int *tmp = malloc( 4 * sizeof(int)); // allocating temp memory 
    if ( tmp == NULL)
    {
        free(list);
        return 1;
    }
    
    for ( int i = 0; i < 3; i++) // copying from *list to *tmp
    {
        tmp[i] = list[i];
    }
    tmp[3] = 4; // adding the additonal element 
     
    free(list); // free the og list 

    list = tmp; // assaign the temp to the og so now it holds an extra element maeans it is now 4*sizeof(int)

    for ( int i = 0; i < 4; i++) // printng 
    {
        printf("%i\n", list[i]);
    }
    free(list); // freeing the list and is same as saying free(tmp)
    return 0;
}
// and threr is a func "realloc" the does all of above

