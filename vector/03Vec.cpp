#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &nums) {
    int str = 0, end = nums.size() - 1;
    while (str < end) {
        swap(nums[str], nums[end]);
        str ++;
        end --;
    }
}

int main() {
    vector<int> nums = {5,4,3,2,1};
    reverse(nums);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;

}