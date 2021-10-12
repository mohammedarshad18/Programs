// Program to Find the Frequency of Characters in a String

#include <iostream>
using namespace std;
int main()
{
    string str = "C++ Programming is awesome";
    char checkCharacter = 'a';
    cout << "Enter a character :";
    cin >> checkCharacter;
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == checkCharacter)
        {
            ++count;
        }
    }
    cout << "Number of " << checkCharacter << " = " << count;
    return 0;
}

/*
CONCEPT:
size() function is used to find the length of a string object.
*/