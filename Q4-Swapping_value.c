#include<stdio.h>
int main() {
    int a, b, c ; //  declaring variabel type and name .
    printf("Enter the value of a : ");
    scanf("%d", &a); //take the input value from user .
    printf("Enter the value of b : ");
    scanf("%d", &b); //take the input value from user .
    printf("the value of a is %d and b is %d \n", a, b); // Display the value before swapping .
    printf("after swapping the value of a and b\n");
    c=a; //putting the values of a into c.
    a=b; //putting the value of b into a .
    b=c; //putting the value of c into b.
    printf("the value of a is %d and b is %d", a, b); // Display the value after swapping .
    return 0;
}
