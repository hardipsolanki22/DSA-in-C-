#include <iostream>
using namespace std;

int sunOfDigit(int digit) {
    int num = 0;
    cout << "digit " << digit << endl;
    while(digit > 0) {
        int lastDgit = digit % 10;
        digit = digit / 10;
        num += lastDgit;

    }
     cout << "digit " << digit << endl;
    return num;
}

int calNcR(int n, int r) {
    int first = 1;
    for (int i = 1; i <= n; i++)  {
        first = first * i;
    }
    int secondOne = 1;
    for (int i = 1; i <= r; i++) {
        secondOne = secondOne * i;
    }
    int lastOne = 1;
    for (int i = 1; i <= n-r; i++) {
        lastOne = lastOne * i;
    }
    cout << "first: "<< first << endl;
    cout << "second: "<< secondOne << endl;
    cout << "last: "<< lastOne << endl;
    return (first/ (secondOne * lastOne));
}

int binaryToDecimal(int binaryNo) {
    int result = 0, mulByTwo = 1;
    while (binaryNo > 0) {
        if (binaryNo % 10 != 0) {
            result += mulByTwo;
        }
        binaryNo /= 10;
        mulByTwo *= 2;
    }
    return result;
}

int decimalToBinary(int digit) {
    int result = 0, pow = 1;
    while(digit > 0) {
        int rem = digit % 2;
        result += rem * pow;
        pow *= 10;
        digit /= 2; 
    }
    cout << "Binary to Decimal: " << binaryToDecimal(result) << endl;
    return result;
} 



int main() {
    // cout << "Sum " << sunOfDigit(12345) << endl;
    // cout << "5c2 " << calNcR(5, 3);
    cout << "Decimal to Binary " << decimalToBinary(10) << endl;
    return 0;

}


