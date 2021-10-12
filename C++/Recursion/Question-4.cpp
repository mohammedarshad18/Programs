// Program to Calculate Power Using Recursion

#include <iostream>
using namespace std;
int calculatePower(int, int);
int main()
{
    int base, powerRaised, result;
    cout << "Enter base number: ";
    cin >> base;
    cout << "Enter power number(positive integer): ";
    cin >> powerRaised;
    result = calculatePower(base, powerRaised);
    cout << base << "^" << powerRaised << " = " << result;
    return 0;
}
int calculatePower(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base * calculatePower(base, powerRaised - 1));
    else
        return 1;
}

/*
NOTE:
This technique can only calculate power if the exponent is a positive integer.
To find power of any number, you can use pow() function.
result = pow(base, exponent);
*/