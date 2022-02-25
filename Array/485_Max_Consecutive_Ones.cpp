/* 
485. ������� 1 �ĸ���
����һ������������ nums �� ��������������� 1 �ĸ�����
ʾ�� 1��
���룺nums = [1,1,0,1,1,1]  �����3

ʾ�� 2:
���룺nums = [1,0,1,1,0,1]  �����2

��ʾ��
1 <= nums.length <= 105
nums[i]?���� 0 ���� 1. */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        /* 
            Max�������������
            count����������
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