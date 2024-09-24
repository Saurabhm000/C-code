#include <stdio.h>

int main()
{
    float amount, time, totalint;
    float interest;
    printf("Enter the pricipal Amount :");
    scanf("%f", &amount);
    printf("Enter years :");
    scanf("%f", &time);
    printf("Enter Rate of Interest :");
    scanf("%f", &interest);

    float c;
    float sam[50];

    for (int i = 1; i <= time; i++)
    {

        c = amount * interest / 100;
        amount = amount + c;
        
        sam[i] = c;
    }

    float j = 0;

    for (int i = 0; i <= time; i++)
    {
        j = j + sam[i];
    }

    printf("The compound interest (p.a) is : %.2f", j);

    return 0;
}