#include <iostream>
using namespace std;

void reverseArr(int arr[], int size) {
    int str = 0, end = size - 1;
   
    while (str < end) {
        swap(arr[str], arr[end]);
        str ++;
        end --;
    }
}


int main() {
    int size = 6;
    int arr[size] = {1,2,3,4,5,6};

    reverseArr(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
    return 0;

}