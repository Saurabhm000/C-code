#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age "); //ask the user to enter the age
    scanf("%d", &age); //save the value in 'age' variable
    printf("you have entered %d as your age\n", age);
    if (age>=18) //using if statement to check age is 18 or greater than 18.
    {
        printf("You are eligible for vote\n");
    }
    else if (age>=10) //using else if statement to check age is 10 or greater than 10.
    {
        printf("You're a  Teenager not an adult");
    }
    

    else // Using 'else' statement, if above condition is not true then it enters in else condition.
    {
        printf("No you are not eligibe for vote");
    }
    
    
    return 0;

}
