/* 
414. ���������
����һ���ǿ����飬���ش������� ��������� ����������ڣ��򷵻���������������
ʾ�� 1��
���룺[3, 2, 1] �����1

ʾ�� 2��
���룺[1, 2]    �����2
���ͣ����������������, ���Է��������� 2 ��

ʾ�� 3��
���룺[2, 2, 3, 1]  �����1
���ͣ�ע�⣬Ҫ�󷵻ص������������ָ�����в�ͬ�������ŵ����������
�����д�������ֵΪ 2 ���������Ƕ��ŵڶ��������в�ͬ�������ŵ��������Ϊ 1 ��
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