class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> mono;
        int len = temperatures.size();
        vector<int> days(len);
        for(int i = 0; i < len; i++){
            while(!mono.empty() && temperatures[mono.top()] < temperatures[i]){
                days[mono.top()] = i - mono.top();
                mono.pop();
            }
            mono.push(i);
        }
        return days;
    }
};