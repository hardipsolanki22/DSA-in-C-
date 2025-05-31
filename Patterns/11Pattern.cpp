#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "*";
        }
        for (int q = 0; q < i; q++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "*";
        }
        for (int q = 0; q < i; q++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}