/* 
414. 第三大的数
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
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int len=nums.size();
        for(int i=0;i<len;i++){
            for(int j=0;j<len-i-1;j++){
                if(nums[j]<nums[j+1]){
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }

        int max=nums[0],index=0;
        for(vector<int>::iterator it=nums.begin()+1;it!=nums.end();it++){
            if(*it != *(it-1)){
                index++;
                if(index==2)    max=*it;
            }
        }
        return max;
    }
};

int main(){
    Solution v;
    vector<int> nums{2,2,3,1};
    cout<<v.thirdMax(nums)<<endl;

    return 0;
}