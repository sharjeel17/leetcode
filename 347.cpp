class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int len = nums.size();
        for(int i = 0; i < len; i++){
            map[nums[i]]++;
        }
        vector<vector<int>> frequencies(len+1);
        for(auto& freq: map){
            frequencies[freq.second].push_back(freq.first);
        }

        vector<int> answer;
        for(int i = len; answer.size() < k; i--){
            for(auto freq: frequencies[i]){
                answer.push_back(freq);
            }
            
        }
        return answer;
    }
};