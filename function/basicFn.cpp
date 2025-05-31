#include <iostream>
using namespace std;

int sum(int n)
{ // parametrs
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    cout << "sum : " << sum(10); // argument

    return 0;
}
