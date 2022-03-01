/* 628. 三个数的最大乘积
给你一个整型数组 nums ，在数组中找出由三个数组成的最大乘积，并输出这个乘积。
示例 1：
输入：nums = [1,2,3]    输出：6

示例 2：
输入：nums = [1,2,3,4]  输出：24

示例 3：
输入：nums = [-1,-2,-3] 输出：-6 

提示：
3 <= nums.length <= 104
-1000 <= nums[i] <= 1000 */

#include <iostream>
#include <vector>
#include <algorithm>//sort()函数所需头文件 

using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int len = nums.size();
        int result1 = nums[0] * nums[1] * nums[2];
        int result2 = nums[0] * nums[len-2] * nums[len-1];
        int max = 0;
        max = result1 > result2 ? result1 : result2;
        return max;
    }
};

int main() {
    Solution v;
    vector<int> nums{-100,-98,-1,2,3,4};
    cout << v.maximumProduct(nums) << endl;

    return 0;
}