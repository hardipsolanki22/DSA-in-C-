#include <iostream>
using namespace std;

int main() {
    int n = 10, i =  1;
    cout << "Bitwise && " << (3 & 7) << endl;
    cout << "Bitwise || " << (3 | 7) << endl;
    cout << "Bitwise ^ "<< (3 ^ 7) << endl;
    cout << "Right shift: " << (n >> i) << endl;
    cout << "Light shift: " << (n << i) << endl;

   
    return 0; 
}