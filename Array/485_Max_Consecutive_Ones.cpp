/* 
485. 最大连续 1 的个数
给定一个二进制数组 nums ， 计算其中最大连续 1 的个数。
示例 1：
输入：nums = [1,1,0,1,1,1]  输出：3

示例 2:
输入：nums = [1,0,1,1,0,1]  输出：2

提示：
1 <= nums.length <= 105
nums[i]?不是 0 就是 1. */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        /* 
            Max：最大连续个数
            count：连续个数
         */
        int Max=0,count=0;
        for(vector<int>::iterator it=nums.begin();it!=nums.end();it++){
            if(*it==1){
                count++;
                if(Max<count)   Max=count;
            }
            else{
                count=0;
            }
        }
        return Max;
    }
};

int main(){
    Solution v;
    vector<int> nums{1,1,0,1,1,1};
/*     nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1); */
    int a=v.findMaxConsecutiveOnes(nums);
    cout<<a<<endl;

    return 0;
}