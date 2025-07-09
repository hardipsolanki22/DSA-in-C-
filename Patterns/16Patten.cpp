#include <iostream>
using namespace std;

int main() {

    int n = 4;
    char ch = 64;
    // 1) i = 0
    // 2) i = 1
    for (int i = 0; i < n; i++) {
        // 1) j = (0+1) = 1; 1 > 0 ...1
        // 2) j = (1 + 1) = 2; 2 > 0 ... 2,1
        for (int j = i+1; j > 0; j--) {
            // 1) print (64 + 1 = 65) = A and exist 
            // 2,1) print (64 + 2 = 66) = B
            // 2, 2) print (64 + 1 = 65) = A
            cout << (ch += j);
            // 1) ch = (65 - 1 = 64
            // 2, 1) ch = (66 - 2 = 64
            // 2,2) ch = (65 - 1 = 64
            ch-=j;
        }
        cout << endl;
    } 
    return 0;

    // A
    // B A
    // C B A
    // D C B A

}