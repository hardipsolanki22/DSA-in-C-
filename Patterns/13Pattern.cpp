#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // top part
    for (int i = 0; i < n; i++)
    {

        // start
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        // space
        if (i != n - 1)
        {
            for (int k = 0; k < 2 * (n - i - 1); k++)
            {
                cout << " ";
            }
        }
        // start

        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // bottum part

    for (int i = 0; i < n; i++)
    {
        // start
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        // space
        for (int k = 0; k < 2 * i; k++)
        {
            cout << " ";
        }

        // start
        for (int q = 0; q < n - i; q++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}