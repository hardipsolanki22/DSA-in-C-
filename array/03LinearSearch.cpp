#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int target = 8;
    int arr[] = {12,32, 8, 11,45,10};
    int size = sizeof(arr)/ sizeof(int);
    cout << "Target: " << linearSearch(arr, size, target);

    return 0;
}