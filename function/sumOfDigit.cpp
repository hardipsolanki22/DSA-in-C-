#include <iostream>
using namespace std;

// function to calculate sum of digits of a number

int calSumOfDigit(int num) {
    int digitSum = 0;
    while (num > 0) {
        int lastDigit = num % 10;
        num /= 10;

        digitSum += lastDigit;
    
    return digitSum;
    }
}

int main() {
    cout << "Sum is: " << calSumOfDigit(145);
    return 0;
}