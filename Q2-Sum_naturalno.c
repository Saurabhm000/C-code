//Program to Calculate the Sum of Natural Numbers .

#include<stdio.h>
int sum(int n)
{
    int j=0;

    for (int i = 1;( i = n); i++)
    {
        j += n;
        n--;
    }
    return j;
}
int main()
{
    int num;
    printf("Enter the max number for sum : ");
    scanf("%d", &num);
    printf("The sum of natural number from 1 to %d is %d",num, sum(num));
    return 0;

}