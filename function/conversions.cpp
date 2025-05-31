#include <iostream>
using namespace std;

int conBinaryToDecimal (int binary) {
    int result = 0, pow = 1;
    while( binary > 0) {
        int rem = binary % 10;
        cout << "rem: "<< rem << endl;
        result += rem * pow;
        pow *= 2;
        binary /= 10;
        cout << "result: " << result << endl;
        cout << "binary: "<< binary << endl;
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

    cout << "Decimal To Binary: " << conDecimalToBinary(7);

    return 0;
}