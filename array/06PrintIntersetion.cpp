#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] == arr2[i]) {
            cout << arr1[i] <<" ";
        }
    }
}


int main() {
    int size = 5;
    int arr1[size] = {1,2,50,4,50};
    int arr2[size] = {10,20,30,4,9};

    intersection(arr1, arr2, size);

    return 0;

}