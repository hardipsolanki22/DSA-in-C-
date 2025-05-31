#include <iostream>
using namespace std;

int fectoriyal(int n)
{
    int fecto = 1;
    for (int i = 1; i <= n; i++)
    {
        fecto *= i;
    }
    return fecto;
}

int main()
{
    cout << "Fectoriyal: " << fectoriyal(5);

    return 0;
}