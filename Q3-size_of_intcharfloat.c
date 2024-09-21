#include <stdio.h>
int main()
{
    int a;
    char b;
    float c;
    long d;
    double e;
    unsigned f;
    printf("Size of int is : %lu\n", sizeof a);
    printf("Size of long is : %lu\n", sizeof d);
    printf("Size of char is : %lu\n", sizeof b);
    printf("Size of float : %lu\n", sizeof c);
    printf("Size of double : %lu\n", sizeof e);
    printf("Size of unsigned  : %lu\n", sizeof f);

    return 0;
}