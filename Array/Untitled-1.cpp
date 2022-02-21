#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=1;
        
        for(vector<int>::iterator it=nums.begin();it!=nums.end();it++)
        {
            if(*it==*(it++))
            {
                n++;
            }
            else
            {
                n=1;
            }
        }
        return n;
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