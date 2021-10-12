// Program to Find LCM

#include <iostream>
using namespace std;
int main()
{
    int n1, n2, max;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    // maximum value between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;
    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
            ++max;
    } while (true);
    return 0;
}

/*
EXPLANATION:
In the above program, the user is asked to integer two integers n1 and n2 and the
largest of those two numbers is stored in max.
It is checked whether max is divisible by n1 and n2, if it's divisible by both numbers, max
(which contains LCM) is printed and loop is terminated.
If not, value of max is incremented by 1 and the same process goes on until max is
divisible by both n1 and n2.

OTHER METHOD:
The LCM of two numbers is given by:
LCM = (n1 * n2) / HCF
So we can calculate LCM by calculating HCF (above question)
*/