// 739. Daily Temperatures
// https://leetcode.com/problems/daily-temperatures/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size()) ;
        stack<int> stk;
        stk.push(0);
        for(int i = 1 ; i < temperatures.size() ; i++){
            while (!stk.empty() && temperatures[i] > temperatures[stk.top()]) {
            int prev = stk.top();
            stk.pop();
            ans[prev] = i - prev;
            }
            stk.push(i);
        }
        return ans;
    }
};
