#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    // outer loop is used to print line (row 1, row 2, row 3...and so on)
    // inner loop is used to print inner row
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}