// Hollow Rectangular Star

#include <iostream>
using namespace std;
//Function to print hollow rectangle*/
void hollow_rectangle(int n, int m)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int rows, columns;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << "Enter the number of columns : ";
    cin >> columns;
    cout << endl;
    hollow_rectangle(rows, columns);
    return 0;
}
