#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec;
    // vector <int> vec(3, 1);
    // vector <char> charVec = {'c', 'o', 'd', 'e'};
    // int arr[4] = {1,2,3,4};
    // cout << vec[0];
    // cout << vec[1];
    // cout << vec[2];
    
   
    // vector buield in function
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    vec.pop_back();
    cout << "vector front value: " << vec.front() << endl;
    cout << "vector last value: " << vec.back() << endl;
    cout << "second index: "<< vec.at(1) << endl;
    cout << "size: " << vec.size() << endl;
    cout << "copacity of vec: " << vec.capacity() << endl;
    cout << "is vector empty: " << vec.empty() << endl;
     // for each loop || arrays and vector both
     for (int val : vec) {
        cout << val << endl;
    }


    return 0;

}