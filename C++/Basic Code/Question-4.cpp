// Find Quotient and Remainder

#include <iostream>
using namespace std;
int main()
{
    int divisor, dividend, quotient, remainder;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;
    return 0;
}

/*
CONCEPT:
The division operator / computes the quotient (either between float or integer variables).
The modulus operator % computes the remainder when one integer is divided by
another (modulus operator cannot be used for floating-type variables).

*/