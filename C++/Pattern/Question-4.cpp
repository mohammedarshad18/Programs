// Inverted Half Pyramid

#include <iostream>
using namespace std;
int main()
{
    int i, j, n, k = 0;
    cin >> n;
    for (i = n; i >= 1; --i)
    {
        for (j = 1; j <= i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
