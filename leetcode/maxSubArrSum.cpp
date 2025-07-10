#include <iostream>
#include <vector>
using namespace std;

void subArr (vector <int>& nums, int n) {
    for (int st = 0; st < n; st++) {
        for (int end = st; end < n; end++) {
            for (int subA = st; subA <= end; subA++) {
                cout << nums[subA];
            }
            cout << " ";
        }
        cout << endl;
    }
}

// Brute Force Approach O(n2)
// int maxSubArrSum (vector <int>& nums, int n) {
//     int maxSum = INT32_MIN;
//     for (int str = 0; str < n; str++) {
//         int currentSum = 0;
//         for (int end = str; end < n; end++) {
//             currentSum += nums[end];
//             maxSum = max(currentSum, maxSum);
//         }
//     }
//     return maxSum;
// }

// Kadane's Algorithm O(n)
int maxSubArrSum (vector <int>& nums, int n) {
    int maxSum = INT32_MIN, currSum = 0;
    for (int i = 0; i < n; i++) {
        currSum += nums[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0) currSum = 0;
    }
    return maxSum;
}
    // cs = 3, -1, 4, 9, 13, 12, 19, 8 , 9
int main() {
    vector <int> arr = {3, -4, 5, 4, -1, 7, -8, 1};
    // vector <int> arr = {-1,-2,-3,-4,-5};
    int n = arr.size();
    // subArr(arr, n);
    cout << "Maximum Sub Array: " << maxSubArrSum(arr, n);


    return 0;

}