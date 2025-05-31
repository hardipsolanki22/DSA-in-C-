#include <iostream>
using namespace std;

void changeArr(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}

int main() {
    int arr[5] = {1,2,3,4,5};
    changeArr(arr, 5);

    cout << "Array After Calling change fn" << endl;

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}