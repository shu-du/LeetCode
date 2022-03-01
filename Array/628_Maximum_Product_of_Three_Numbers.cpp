/* 628. �����������˻�
����һ���������� nums �����������ҳ�����������ɵ����˻������������˻���
ʾ�� 1��
���룺nums = [1,2,3]    �����6

ʾ�� 2��
���룺nums = [1,2,3,4]  �����24

ʾ�� 3��
���룺nums = [-1,-2,-3] �����-6 

��ʾ��
3 <= nums.length <= 104
-1000 <= nums[i] <= 1000 */

#include <iostream>
#include <vector>
#include <algorithm>//sort()��������ͷ�ļ� 

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