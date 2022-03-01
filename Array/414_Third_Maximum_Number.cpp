/* 414. 第三大的数
给你一个非空数组，返回此数组中 第三大的数 。如果不存在，则返回数组中最大的数。
示例 1：
输入：[3, 2, 1] 输出：1

示例 2：
输入：[1, 2]    输出：2
解释：第三大的数不存在, 所以返回最大的数 2 。

示例 3：
输入：[2, 2, 3, 1]  输出：1
解释：注意，要求返回第三大的数，是指在所有不同数字中排第三大的数。
此例中存在两个值为 2 的数，它们都排第二。在所有不同数字中排第三大的数为 1 。

提示：
1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1 */

#include <iostream>
#include <vector>
#include <algorithm>//sort()函数所需头文件 

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int len = nums.size();
        int max = nums[0], index = 0;
        for(vector<int>::iterator it = nums.begin()+1; it != nums.end(); it++){
            if(*it != *(it-1)) {
                index++;
                if(index == 2)    max = *it;
            }
        }
        return max;
    }
};

int main() {
    Solution v;
    vector<int> nums{2,2,3,1};
    cout << v.thirdMax(nums) << endl;

    return 0;
}