#include <iostream>
using namespace std;

int ncr(int n, int r) {

    // calculate fectoriyal for n
    int factoriyalN = 1;
    for (int i = 1; i <= n; i++) {
        factoriyalN *= i;
    }
    // calculate fectoriyal for r
    int factoriyalR = 1;
    for (int i = 1; i <= r; i++) {
        factoriyalR *= i;
    }
    // calculate n-r 
    int factoriyalNMinusR = 1;
    for (int i = 1; i <= n-r; i++) {
        factoriyalNMinusR *= i;
    }

    int result = factoriyalN / (factoriyalR * factoriyalNMinusR);
    return result;
}

int main() {
    int n = 8, r = 2;
    cout << "Binomial Cofficient for " << n << " & " << r << " " << ncr(n, r);

    return 0;
}