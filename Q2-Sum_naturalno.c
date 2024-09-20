//Program to Calculate the Sum of Natural Numbers .

#include<stdio.h> 
//below here we create a function name "sum" for finding sum of natural number.
int sum(int n)
{
    int j=0;
    //Create for loop for sum it till the max user number adds.
    for (int i = 1;( i = n); i++)
    {
        j += n;
        n--;
    }
    return j;
}
int main()
{
    ///In below line We create a Intger variabe named "num" .
    int num;
    //In below line we display this msg on user screen and ask user to input max number for sum .
    printf("Enter the max number for sum : ");
    scanf("%d", &num); // in this line we take input from user and store it in "num" variable.
    //In below line we display the sum of natural number on user screen. also here we run "sum" function for finding the sum.
    printf("The sum of natural number from 1 to %d is %d",num, sum(num));
    return 0;

}
//PROGRAM ENDS HERE
