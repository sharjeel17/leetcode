class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        unordered_map<int,int> map;
        for(auto& num: nums){
            if(map.find(target-num) != map.end()){
                return {i,map[target-num]};
            }
            map[num] = i;
            i++;
            
        }
        return {0,0};
    }
};