// Program to Calculate Sum of first N Natural Numbers
// We have to display the value of 1+2+3+....+N

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }
    cout << "Sum = " << sum;
    return 0;
}

/*
NOTE: If a user enters a negative number, Sum = 0 is displayed and program is
terminated.
*/