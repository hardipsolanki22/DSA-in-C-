#include <iostream>
using namespace std;

int conBinaryToDecimal (int binary) {
    int result = 0, pow = 1;
    while( binary > 0) {
        int rem = binary % 10;
        result += rem * pow;
        pow *= 2;
        binary /= 10;
    }
    return result;
}

int conDecimalToBinary (int num) {
    int result = 0, pow = 1;

    while(num > 0) {
        int remaider = num % 2;
        result += remaider * pow;

        pow *= 10;
        num /= 2;
    }
    cout << "Binary To Decimal: " << conBinaryToDecimal(result) << endl;
    return result;
}





int main() {

    cout << "Decimal To Binary: " << conDecimalToBinary(10);

    return 0;
}