#include <stdio.h>
int main()
{
    //Below , we create diffferent different different data type variable
    int a;
    char b;
    float c;
    long d;
    double e;
    unsigned f;
    //After Declaring the variables type and name 
    // we display it on the screen by using printf fucntion.
    printf("Size of int is : %lu\n", sizeof a); //here we use 'size of' operator thats display the size of a.
    printf("Size of long is : %lu\n", sizeof d); //here we use 'size of' operator thats display the size of d.
    printf("Size of char is : %lu\n", sizeof b); //here we use 'size of' operator thats display the size of b.
    printf("Size of float : %lu\n", sizeof c); //here we use 'size of' operator thats display the size of c.
    printf("Size of double : %lu\n", sizeof e); //here we use 'size of' operator thats display the size of e.
    printf("Size of unsigned  : %lu\n", sizeof f); //here we use 'size of' operator thats display the size of f.

    return 0;
}
