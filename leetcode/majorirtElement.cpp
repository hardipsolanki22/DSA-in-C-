#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute Force  O(n2)
// int findMajorityElement (vector <int> nums, int n) {
//     for (int i = 0; i < n; i++) {
//         int mjEleCout = 1;
//         for (int j = i+1; j < n; j++) {
//             if (nums[i] == nums[j]) mjEleCout ++;
//             if (mjEleCout > n/2) return nums[i];
//         }
//     }  
// }

// Using sorting (sorting O(log n)  + loop O(n)) = O(n log n)
// int findMajorityElement (vector <int>& nums, int n) {
//     // sort array
//     sort(nums.begin(), nums.end());
//     int ans = nums[0], freq = 1;;
//     if (n == 1) return nums[0];
//     for (int i = 0; i < n-1; i++) {
//         if (ans == nums[i+1]) freq ++;
//         else {
//             ans = nums[i+1];
//             freq = 1;
//         }
//         if (freq > n/2) return ans;
//     }
//     return -1;
// }

// Moore's Voting Algorithm O(n)
int findMajorityElement (vector <int>& nums,int n) {
    int fr = 0, ans;
    for (int i = 0; i < n; i++) {
        if (fr == 0) 
            ans = nums[i];
        if (ans == nums[i])
            fr++;
        else fr--;
    }
    // optional is majority elements is not present
    int count = 0;
    for (int val : nums) {
        if (val == ans) count ++;
    }
    if (count > n/2) return ans;
    else return -1;
}



int main() {
    vector <int> nums = {1,2,2,1,1};
    cout << "Majorirt Element: " << findMajorityElement(nums, nums.size()) << endl;
    // findMajorityElement(nums, nums.size());

    // for (int val : nums) {
    //     cout << val <<" ";
    // }



    return 0;

}