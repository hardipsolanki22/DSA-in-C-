#include <iostream>
#include <vector>
using namespace std;

bool containsDupl(vector<int> &nums){
    bool isDublicate = false;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++) {
            if (nums[i] == nums[j]) isDublicate = true;
        }
    } 

    return isDublicate;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 5};
    cout << "Result: " << containsDupl(nums);
    return 0;
}