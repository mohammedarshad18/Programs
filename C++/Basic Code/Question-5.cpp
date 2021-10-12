// Find Size of int, float, double and char in your Computer

#include <iostream>
using namespace std;
int main()
{
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    return 0;
}

/*
Note: You may get different results if you are using an old computer
CONCEPT: To find the size of the variable, sizeof operator is used sizeof(dataType);
*/