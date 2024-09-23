#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age ");
    scanf("%d", &age);
    printf("you have entered %d as your age\n", age);
    if (age>=18)
    {
        printf("You are eligible for vote\n");
    }
    else if (age>=10)
    {
        printf("You're a  Teenager not an adult");
    }
    

    else
    {
        printf("No you are not eligibe for vote");
    }
    
    
    return 0;

}