// Program to Find Factorial

/*
THEORY:
The factorial of a positive integer n is equal to 1*2*3*...n.
Note:
The factorial of a negative number doesn't exist. And the factorial of 0 is 1.
n! = 1 if n = 0 or n = 1
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    long double factorial = 1.0;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial;
    }
    return 0;
}

/*
NOTE:
This program can calculate the factorial only up to 1754 or some integer value close to it.
Beyond that, the program can no longer calculate the factorial as the results exceed the
range of long double data type.
*/