/* 
495. ��Ī����
һ�� �ǵݼ� ���������� timeSeries ������ timeSeries[i] ��ʾ��Ī�� timeSeries[i] ��ʱ�԰�ϣ���𹥻����Լ�һ����ʾ�ж�����ʱ������� duration ���ذ�ϣ�����ж�״̬�� �� ������
ʾ�� 1��
���룺timeSeries = [1,4], duration = 2  �����4
���ͣ���Ī�����԰�ϣ��Ӱ�����£�
- �� 1 �룬��Ī������ϣ��ʹ�������ж����ж�״̬��ά�� 2 �룬���� 1 ��͵� 2 �롣
- �� 4 �룬��Ī�ٴι�����ϣ����ϣ�ж�״̬�ֳ��� 2 �룬���� 4 ��͵� 5 �롣
��ϣ�ڵ� 1��2��4��5 �봦���ж�״̬���������ж������� 4 ��

ʾ�� 2��
���룺timeSeries = [1,2], duration = 2  �����3
*/

#include <iostream>
#include <vector>
using namespace std;
  
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        /*
            less������һ����λ��duration��������
            count�� duration ����
            sec��������
        */
        int less=0,count=0,sec=0;
        int len=timeSeries.size();
        if(len==1)    sec=duration;
        else{
            for(int i=0;i<len-1;i++){
                if((timeSeries[i]+duration) <= timeSeries[i+1]){
                    count++;
                }
                else{
                    less+=timeSeries[i+1]-timeSeries[i];
                }
            }
            //���1s����һ�������� duration ���� count+1
            sec=(count+1)*duration+less;
        }
        return sec;
    }
};

int main(){

    Solution v;
    vector<int> timeSeries;
    timeSeries.push_back(1);
    // timeSeries.push_back(2);
    int a=v.findPoisonedDuration(timeSeries,2);
    cout<<a<<endl;

    system("pause");
    return 0;
}
