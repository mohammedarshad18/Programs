// Program to calculate the sum of even numbers from 1 to n

#include <stdio.h>
#include <conio.h>

void main()
{
    int sum = 0, n;

    printf("Enter the number : ");
    scanf("%d", &n);
    sum = ((n / 2) * ((n / 2) + 1));

    printf("Sum of even numbers from 1 to %d : %d", n, sum);
    getch();
}