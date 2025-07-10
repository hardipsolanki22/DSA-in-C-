#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> nums;

    // O(1) complaxity
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    // cout << nums.front() << " " << nums.back() << endl;

    // O(n) complaxity
    // erase element
    // nums.erase(nums.begin() + 1, nums.begin() + 3); // it is similar to splice method in js str to n-1

    // insert element 
    nums.insert(nums.begin() + 2, 100);
    
    // clear all element 

    cout << "Size of vecto Before clear: " << nums.size() << endl;
    nums.clear(); // clear elements but vector capacity is not clear
    cout << "Size of vecto ater clear: " << nums.size() << endl;
    cout << "Capacity of vecto ater clear: " << nums.capacity() << endl;

    // empty it return 0 or 1 boolean 
    cout << "Is empty: " << nums.empty();
    for (int num : nums) {
        cout << num << endl;
    }
    return 0; 
}