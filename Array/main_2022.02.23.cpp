/* 
495. 提莫攻击
一个 非递减 的整数数组 timeSeries ，其中 timeSeries[i] 表示提莫在 timeSeries[i] 秒时对艾希发起攻击，以及一个表示中毒持续时间的整数 duration 返回艾希处于中毒状态的 总 秒数。
示例 1：
输入：timeSeries = [1,4], duration = 2  输出：4
解释：提莫攻击对艾希的影响如下：
- 第 1 秒，提莫攻击艾希并使其立即中毒。中毒状态会维持 2 秒，即第 1 秒和第 2 秒。
- 第 4 秒，提莫再次攻击艾希，艾希中毒状态又持续 2 秒，即第 4 秒和第 5 秒。
艾希在第 1、2、4、5 秒处于中毒状态，所以总中毒秒数是 4 。

示例 2：
输入：timeSeries = [1,2], duration = 2  输出：3
*/

#include <iostream>
#include <vector>
using namespace std;
  
class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        /*
            less：不足一个单位（duration）的秒数
            count： duration 个数
            sec：总秒数
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
            //最后1s，有一个完整的 duration ，即 count+1
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
