#include <iostream>
#include <vector>
using namespace std;

int main() {
    // iterators is like a pointer
    vector <int> nums = {1,3,4,5};
    cout <<"Begin value " << *(nums.begin()) << endl;
    cout <<"End value " << *(nums.end() -1)  << endl; // end retuen n+1 so always use n-1
    
    // create iterator
    // forward loop
     cout << "Forward loop " << endl; 
    vector <int> :: iterator it;
    for (it = nums.begin(); it != nums.end(); it++) {
        cout << *(it) << endl;
    }
    cout << "Backward loop " << endl; 
    // backward loop
    vector <int> :: reverse_iterator rit;
    for (rit = nums.rbegin(); rit != nums.rend(); rit++) {
        cout << *rit << endl;
    }

    // modern c++ synatx
    // you can also iterate backward loop using modern syntax
    for (auto it = nums.begin(); it != nums.end(); it ++) { 
        cout << "Modern: " << *it << endl;
    }

    // for (vector <int> :: iterator it = nums.begin(); it != nums.end(); it++) {
    //     cout << *it;
    // }

    return 0;

}