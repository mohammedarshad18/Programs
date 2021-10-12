// Program to check perfect number

#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i = 1, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);

    while (i < n)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    if (sum == n)
    {
        printf("\n%d is a perfect number", i);
    }
    else
    {
        printf("\n%d is not a perfect number", i);
    }
    getch();
}