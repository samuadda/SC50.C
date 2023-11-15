//A function is a block of code that performs a specific task and can be called by other parts of the program. It's a way to organize and reuse code.


//OUTPUTtype - the name-    input (parameters)
  int          add_numbers    (int x, int y) {
//   what does it do ?
    return x + y;
}

int main(function) // the main finction typically dose,t take input (parameters ), // FUNCTIONS ARE THE SAME AS PRESIGURE OR METHODS OR SUBROTINS
          //but it can take "void" which means no input using void is the same as not using anything but it's a better paractice to use it,
          // the second parameter in "main" is int main(int argc, char or string *argv[]): which menas argument count, and argument vector
          // and those are used for command-linen arguments.
          // the first part in function is it's return type (int, cahr, bool...) and the typical use is an int to return 0; in case of success
          // to let the cumputer know the task has baan done or to return other than zero to tell the cmputer about an erro so if you saw vois in the beggining 
          // this means this function does net return anything , and the return here is called "exit status" 
          // THE FUNC DECLERATION IS THE ONE IN TOP ENDING WITH ; AND THE ONE IN THE FROGRAM WHICH CONTAINS THE FUNC BEHEVIOR IS CALLED FUNC DEFENATION.
{

}

int examp(argument) // An argument is a value passed to a function when it is called
                   //. Arguments are also sometimes called "parameters" or "inputs" to a function.
                   // The function uses these arguments to perform its specific task.
{

}

int bool double;
// data types 
//int: On most systems, an int is 32 bits (4 bytes) and can store a range of values from -2147483648 to 2147483647.

//float: A float is 32 bits (4 bytes) and can store a range of values with a single precision. It can represent a range of values from approximately 3.4 x 10^-38 to 3.4 x 10^38.

//double: A double is 64 bits (8 bytes) and can store a range of values with a double precision. It can represent a range of values from approximately 1.7 x 10^-308 to 1.7 x 10^308.

//char: A char is typically 8 bits (1 byte) and can store a single character or an ASCII value. It can represent a range of values from 0 to 255 or -128 to 127.

//void : void type does not have any range of values as it is used to represent the absence of a type.

//_Bool : _Bool type can store a boolean value (1 or 0) == (true or false)

//long int and long double: long int is usually 32-bit (4 bytes) and can store a range of values from -2147483648 to 2147483647. long double is usually 64-bit (8 bytes) and can store a range of values with a double precision.

//short int and short double: short int is usually 16-bit (2 bytes) and can store a range of values from -32768 to 32767. short double is usually 32-bit (4 bytes) and can store a range of values with a single precision.

//It's worth noting that these ranges of values are not standard across all platforms, the size of data types and the range of values they can represent may vary depending on the system.

// ** THEY USE TO USE THE SHORT VERSIONS OF DATA TYPES HENCE THE MEMORIES USE TO TO BE EXPENSIVE UNLIKE NOWDAYS WE USE THE STANDARD TYPE .E.G. INT NOT SHORT INT.., **//


// LOOPS
//A- The for loop is used when the number of iterations is known in advance.
for (initialization; condition; increment/decrement) {
   // code to be executed
}
// 1- The initialization statement is executed only once, before the loop starts. 
//2- The condition is evaluated before each iteration, and if it is true,
//3- the code inside the loop will be execute, if not true the program will quit the loop
//4- The increment/decrement statement is executed after each iteration.

// B- The while loop is used when the number of iterations is not known in advance. The syntax for a while loop is:
while (condition) {
   // code to be executed
}
//he condition is evaluated before each iteration, and if it is true, the code inside the loop will be executed. The loop continues to execute as long as the condition is true.

// C- There is also a do-while loop, similar to while loop, the only difference is that the code inside the do-while loop will execute at least once, 
//regardless of the condition and then it will check the condition.
do {
   // code to be executed
} while (condition);
//It's also worth noting that, The break statement can be used to exit a loop early and the continue statement can be used to skip an iteration of a loop.

//OPRETORS 
Comparison operators { == (equal to), != (not equal to), > (greater than), < (less than), >= (greater than or equal to), and <= (less than or equal to). } 
Logical operators{ These operators are used to perform logical operations such as AND (&&), OR (||), and NOT (!).}

// ** COMPILING IS A SIMPLFICATION FOR 1 PREPROCESSING 2 COMPILING 3 ASSEMBILING 4 LINKING
//1 LIKE FOR #INCLUDE-2 CONVERT TO ASSEMBLY LANG THE LANGUAGE PRE BINARY - 3 NOW CONVERTED TO BINARY 01010 - 4 LINKING ALL THE FILES THE I WROTE STDIO.H CODE LINKED ALL TO GETHER

varibles scope{
    The scope of a variable refers to the portion of the program where the variable can be accessed. 
    In C, variables can have two different scopes: global and local.

A global variable is defined outside of any function, and can be accessed by any function in the program. 
Global variables are typically declared at the beginning of a program, before the main function. 
Because global variables can be accessed by any function, they are considered to be global to the entire program and their scope is the entire program.

A local variable, on the other hand, is defined within a function, and can only be accessed within that function. 
Local variables are typically declared within a function, and their scope is limited to the function in which they are declared. 
When a function finishes executing, the memory allocated to its local variables is freed and can be used by other parts of the program.

It is a best practice to keep the scope of variables as small as possible, 
as that makes it easy to understand the flow of data in the program and minimize bugs caused by unexpected data changes.

It's also important to note that C99 and C11 have introduced a new scope called block scope which allow you to declare variables inside curly brackets {} like if/else,
 for, while, and so on. The variable declared inside the block scope will be only accessible inside the block and it's not accessible outside of the block scope.

}

int arrys[10] ; {
    // an arrays is a countiguess memory...
    arrys[0] = 1;
    arrys[1] = 2;
    arrys[2] = 3;

    int arrys[3] = {1, 2, 3}; same

    int arrys[] = {1, 2, 3}; same

    int arrys[0] [1] [2];

    // ARRAYS ARE PASSED BY REFRENCE NOT BY VALUE UNLIKE ANYTHING ELSE  //
}

// invinting data type

typedef struct //grouping data 
{
    int numb;
    int age;
}
info; // the name fo it

int main ()
{
    info people[2];

    people[0] .numb= 0502745503;
    people[0] .age= 45;
}


//Recursion basicly is when a function call itself.
int factorial(int n) { // this an example 1
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}
// this an example 2 from cs50
void draw(int n); // function prototype or decleration

int main(void)
{
    int hieght = get_int("hieght? "); //prompt user for input

    draw (hieght); // call the draw function with the input as argument
}

void draw(int n) // function defenation
{
    if ( n <= 0) //base case
    {
        return;
    }
    draw(n-1); // recursive call with n-1 as argument

    for (int i = 0; i < n; i++) // loop to print n number of "#"
    {
        printf("#");
    }
    printf("\n"); // new line after each iteration of the loop
}

// SEARCHING ALGOS
1- Linear search - a simple algorithm that iterates through an array or list sequentially, 
comparing each element to the target value until a match is found or the end of the list is reached.
in worst case it has complixity of O(n) in best case Ω(1).

2-Binary search - a more efficient algorithm that is used to search a sorted array or list. 
It works by repeatedly dividing the search interval in half and checking if the target value is less than, 
greater than, or equal to the middle element of the interval.
in worst case it has complixity of O(log n) in best case Ω(1).

// SORTING ALGOS
1-Bubble sort - a simple algorithm that repeatedly steps through the list to be sorted, 
compares each pair of adjacent items and swaps them if they are in the wrong order.
in worst case it has complixity of O(n²) in best case Ω(n).

2-selection sort - algorithm that divides the input list into two parts: 
the sublist of items already sorted and the sublist of items remaining to be sorted.
in worst case it has complixity of O(n²) in best case Ω(n²).

3-merge sort - a divide and conquer algorithm that divides an array into two halves, 
recursively sorts the two halves, and then merges the sorted halves back together.
in worst case it has complixity of O(n log n) in best case Ω(n log n).

// Hexadecimal notation 
is a way to represent numbers using a base-16 numeral system.
The digits used in hexadecimal notation are the numbers 0-9 and the letters A-F. 
In C programming, hexadecimal numbers are denoted by prefixing the number with 0x. 
For example, the hexadecimal number 0xA5 is equivalent to the decimal number 165. 
It is a common representation of binary data in computers and digital electronics.
Hexadecimal notation is useful because it is more compact and easier to read than binary notation, 
which is the native language of computers. It is often used to represent large binary values such as memory ADDRESSES,
color codes, and other data that is used by computers and digital devices.
and it represent 8 bits so 1111 1111 in binary is the same FF in HEXA.

and it used in cs50 in memory bits addresses.

// POINTERS - and pointer is nothing more than an address
In C, a pointer is a variable that holds the memory address of another variable or value. 
Pointers allow you to directly manipulate the memory used by a program, 
which can be useful for many tasks such as dynamic memory allocation, creating data structures, and more.
and it holds the specifec address in which the data is i mean like the exact bit

int x =5;
int *p = &n;
In this example, the variable x is an integer and the variable p is a pointer to an integer. 
The & operator is the "address of" operator, which returns the memory address of a variable. 
So, in this example, the expression &x returns the memory address of x, 
and that address is stored in the pointer variable p.
so the * indecate to this pointer to an integer and the & to indecate this address of...
printf("%i\n", *p); // this line will print what ever is in the pointer p.
printf("%p\n", &n); // this line print the address of n.
and *p will always take 8 bytes 64 bits wether its representintng int lont bool...add_numbers

{
    string s = "HI!";
    char *p = &s[0]; // s[0] here means "H" hence string is an array of charachters/
    printf("%p\n", p); // will print the same address as the line below.
    printf("%p\n", s);
}

// HOW STRING DATA TYPE IS CREATED
typedef char *string ;
"typedef" is a keyword in C that allows you to create an alias or new name for an existing type. 
In this case, it is creating a new type called "string" that is equivalent to "char *", 
which means a pointer to a char.
So An alias is a name or a reference that refers to another name or object. In programming, 
an alias can refer to a variable, a function, or an object, and it can be used to create an alternate name for something.
// EXTRA INFO THD DOUBLE QOUTES "" IS A CLUE TO THE COMPILER THE THIS IS A STRING AND FIGURE OUT WHERE TO PUT THE \0

{
    string c = get_string("c: ");
    
    string h = c;
    h [0] = toupper(h[0]);

    printf("%s ", c);
    printf("%s", h); // both varibles will be uppercase hence the pointer (address) is the same in c

}
malloc and free are C standard library functions that are used for dynamic memory allocation.

malloc (short for "memory allocation") is used to allocate a block of memory on the heap 
(also known as the "free store"). The function takes a single argument, 
which is the number of bytes of memory to be allocated. It returns a pointer to the first byte of the allocated memory, 
which can be used to store data.
and malloc returns an array of first pointer hence memory itself is a huge array, For example:
{
    char *c = get_string("c: "); // prompt the user for string
    
    char *h = malloc(strlen(c) + 1); // declere a string called h ,
                                    //then inside of it allocate memory of size whatever the length of c is plus one which is the '\0' 
    
    if (h == NULL) // this line check if the memory allocation passed otherwise if nu space or anything went wrong the computer will return NULL 
                  // so in this case go ahead and return 1.
    {
        return 1;
    }

    strcpy(h, c); // this line copies in c to h means ( destination, from)
    h [0] = toupper(h[0]); // uppers case the fisrt charachter in h after the linr above made a copy already

    printf("%s ", c); // print the og
    printf("%s", h); // print the updated

    free(h); // free the memory that you have allocated

}
// Dynamic memory allocation allocates a memory while prog is running 
int *px = malloc(sizeof(int)) // if using diffrent computers data size my vary 

// VALGRIND is a tool for detecting memory errors in programs, 
//such as memory leaks, buffer overflows, and use of uninitialized memory. 
//It works by instrumenting the program being tested to monitor memory accesses and to check for errors at runtime.


// the code bellow solves the passing by value issue by passing addresses
void swap(int *a,int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap (&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a,int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
} 
// int *pk= &k; this line as discussed intilizt a pointer var called pk holding the address of k hence the & sign
// the NULL pointer points to nothing means if you intilize a var pointer and did not set it to anything then always set it to NULL.
// arr[i] so &arr[i] is a pointer to the first [0] element of the array hence an array name is a pointer to the first element of an array.
//Dereferencing a pointer in C is the process of accessing the value stored at the memory address that the pointer holds. 
//This is done by using the * operator, also known as the indirection operator. For example, if a pointer variable "ptr" 
//holds the memory address of an int variable "x", dereferencing "ptr" would give the value of "x". In other words, the expression 
//*ptr would give the value stored at the memory location pointed by ptr.
EXAMPLE BELOW

#include <stdio.h>

int main() {
    int x = 5;
    int *ptr = &x; // ptr holds the memory address of x

    printf("Value of x: %d\n", x);
    printf("Value stored at memory address %p: %d\n", ptr, *ptr);
    // *ptr dereferences the pointer and gives the value stored at the memory address it holds
    // which is the value of x

    return 0;
}

//A call stack is a data structure used by a computer program to keep track of the sequence of function calls. It is a Last In, First Out (LIFO) data structure that is used to keep track of the current state of the program.
//When a program calls a function, the function's information, including its parameters and the location to return to, is pushed onto the call stack. This is known as a "function call" or a "stack frame." When the function returns, its information is popped off the call stack, and the program resumes execution from the point immediately after the call.
//The topmost frame on the call stack is the currently executing function. The frame below it is the function that called it, and so on. The bottom of the stack is the main() function, the starting point of the program.
//The call stack can also be used to track the state of the program when an exception or an error occurs. If an error occurs in a function, the call stack can be used to trace the sequence of function calls that led to the error. This is known as a "stack trace," and it can be used to debug the program.
//In short, the call stack is a data structure used by the program to keep track of the sequence of function calls, the state of the program, and to help locate the source of errors.


FILE POINTERS
Sure, file pointers are a way for a program to keep track of its position within a file when reading or writing data. 
In C, the fopen() function is used to open a file and return a pointer to the file, which can then be used with various other file input/output (I/O) functions, 
such as fread() and fwrite(). The pointer is of type FILE*, and must be closed using the fclose() function when the program is finished with the file.
and additional functions are fgetc() and fputc().

fopen() opens a file and returns a file pointer to it, don not forget to check return value in case you get back NULL.
FILE *ptr = fopen(<filename>, <opretion>); E.G. FILE *ptr = fopen(<sam.txr>, "r"); "r" for read 

fclose() it closes the file you have opend using fopen E.G fclose(ptr); and takes the file pointer of that file.

fgetc() reads and returns the next charachter from the file pointed to(usually is used to read and print content ), in condition of that file being opened for read using "r"
E.G char ch = fgetc(<file pointer>); char ch = fgetc(<ptr>);
(usually is used to read and print content ) E.G. 
char ch;
while((ch = fgetc(ptr)) != EOF) // EOF means end of file
    printf("%c", ch); // those lines of code are equal to the terminla command "CAT"

fputc() writes or appends the specified character to the pointed-to file.
E.G. fputc('a', ptr);
char ch;
while((ch = fgetc(ptr)) != EOF)
    fputc(ch, ptr2);// those lines read from "ptr" usinf fgetc and copy to "ptr2" using fputc same command CP

fread()  is a function in C that is used to read a block of data from a file. The function takes a pointer to a memory buffer(usally an array) as its first argument, 
the size of the data elements in bytes as the second argument, the number of elements to be read as the third argument, and a file pointer as the fourth argument. 
The function returns the number of elements successfully read, which may be less than the number requested if the end of the file is reached.
E.G fread(<buffer>, <size>, <qty>, <file pointer>); E.G.
int arr[10]
fread(arr, sizeof(int), 10, ptr);

fwrite() is a function in C that is used to write a block of data to a file. The function takes a pointer to a memory buffer as its first argument, 
the size of the data elements in bytes as the second argument, the number of elements to be written as the third argument, and a file pointer as the fourth argument. 
The function returns the number of elements successfully written, which may be less than the number requested if an error occurs.
E.G fwrite(<buffer>, <size>, <qty>, <file pointer>); E.G.
int arr[10]
fwrite(arr, sizeof(int), 10, ptr);

// re allocating dynamec memory 
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

syntatic sugar 
. the dot is used to accses a field inside of structur
* and the star is used for various things 
-> is a shorhand for both 

linked list in C is a data structure that consists of a sequence of elements, each of which contains a reference (or "link") to the next element in the list. 
The elements in a linked list are typically called "nodes," and each node typically contains a value and a link to the next node in the list. 
The first element in the list is called the "head," and the last element is called the "tail." Linked lists are useful for a variety of tasks, 
such as implementing dynamic data structures, efficient insertion and deletion of elements, and memory management.

// example below 
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    // list of size
    node *list = NULL;

    //add a number to list
    node *n = malloc(sizeof(node));
    if ( n == NULL)
    {
        return 1;
    }
    n->number = 1; // is the same (*n).number = 1; the () like in math means this fist
    n->next = NULL;

    // update list to point to new node
    list = n;

    // add a number to list
    n = malloc(sizeof(node));
        if ( n == NULL)
    {
        free(list);
        return 1;
    }
    n->number = 2; 
    n->next = NULL;
    list->next = n;

    // add a number to list 
        n = malloc(sizeof(node));
        if ( n == NULL)
    {
        free(list->next);
        free(list);
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    //print numbers
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }
    
    // free list
    while ( list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
    return 0;

} 

A-- hash table, also known as a hash map, is a data structure that stores key-value pairs and uses a hash function to map keys to indices in an array, 
called a hash table. The array is used to store the values associated with the keys.

A-- trie, also known as a prefix tree, is a tree-like data structure that is used to store a collection of strings. 
Each node in a trie represents a single character in a string, and the path from the root to a particular node represents a prefix of one of the strings in the collection.



An abstract data structure is a mathematical model for a particular type of data organization or storage that can be implemented using various specific data structures. It defines the behavior and properties that a data structure should have, but does not specify a particular implementation.

Examples of abstract data structures include:

Linked lists: a sequence of elements, each containing a reference (link) to the next element.
Stacks: a last-in, first-out (LIFO) data structure that only allows access to the most recently added element.
Queues: a first-in, first-out (FIFO) data structure that only allows access to the oldest element.
Trees: a data structure in which elements have a hierarchical relationship.
Graphs: a data structure that consists of vertices (nodes) and edges that connect them.
These abstract data structures can be implemented using various specific data structures like arrays, linked lists, trees, etc. For example, a stack can be implemented using an array, a linked list, or a dynamic array. A queue can be implemented using an array, a linked list, or a circular buffer.

It's important to understand the abstract data structure itself, the behavior and properties it should have, rather than a specific implementation. It will help you to choose the best-suited data structure for a particular problem, and understand how to use it efficiently.

int main (void)

{
    
}