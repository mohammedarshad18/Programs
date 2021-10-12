// Program to Calculate Power of a Number using pow()

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float base, exponent, result;
    cout << "Enter base and exponent respectively: ";
    cin >> base >> exponent;
    result = pow(base, exponent);
    cout << base << "^" << exponent << " = " << result;
    return 0;
}

/*
CONCEPT:
We have included the cmath header file in order to use the pow() function.
We then use the pow() function to calculate the power. The first argument is the
base, and the second argument is the exponent.
*/