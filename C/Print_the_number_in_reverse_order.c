// Program to accept a number and print that number in reverse order

#include <stdio.h>
#include <conio.h>

void main()
{
    int reminder, n;

    printf("Enter n : ");
    scanf("%d", &n);

    while (n > 0)
    {
        reminder = n % 10;
        printf("%d", reminder);
        n = n / 10;
    }
    getch();
}