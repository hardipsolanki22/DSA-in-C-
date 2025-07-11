#include <iostream>
#include <vector>
using namespace std;


// Brote Froce Approach O(n2)
// vector <int> pairSum(vector <int>& nums , int n, int target) {
//     vector <int> pair;
//     for (int i = 0; i < n; i++) {
//         for (int j = i+1; j < n+1; j++) {
//             if (nums[i] + nums[j] == target) {
//                 pair.push_back(nums[i]);
//                 pair.push_back(nums[j]);
//             }
//         }
//     }
//     return pair;
// }

// O(n)
vector <int> pairSum(vector <int>& nums , int n, int target) {
    vector <int> pair;
   int str = 0, end = n;
   int twoSum = nums[str] + nums[end];
   while (twoSum != target) {
    twoSum = nums[str] + nums[end];
    if (twoSum > target) {
        end --;
    }
    else if (twoSum < target) {
        str ++;
    }
    else {
        pair.push_back(nums[str]);
        pair.push_back(nums[end]);
        return pair;
    }
   }
    return {};
}

int main() {
    vector <int> nums = {3,2,4}; // array is sorted in assending order
    int n = nums.size() -1, target = 6;
    for (int val : pairSum(nums, n, target)) {
        cout << "pair sum: " << val << endl;
    }

    return 0;

}