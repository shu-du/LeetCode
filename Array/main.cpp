#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
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

int main()
{
    Solution v;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    int a=v.findMaxConsecutiveOnes(nums);
    cout<<a<<endl;

    return 0;
}