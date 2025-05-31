#include <iostream>
using namespace std;

int uniqueArr(int arr[], int size) {
    int uniqueEle = 0;
    for (int i = 0; i < size; i++) {
      uniqueEle = uniqueEle ^ arr[i];
    }
  return uniqueEle;
  
}

int main() {
    int size = 7;
    int arr[size] = {1,3,7,1,3,7,9};
    cout << "UniqueEle: " << uniqueArr(arr, size) << endl;


    return 0;

}