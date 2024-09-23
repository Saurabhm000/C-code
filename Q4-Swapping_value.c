#include<stdio.h>
int main() {
    int a, b, c ;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("the value of a is %d and b is %d \n", a, b);
    printf("after swapping the value of a and b\n");
    c=a;
    a=b;
    b=c;
    printf("the value of a is %d and b is %d", a, b);
    return 0;
}