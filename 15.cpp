class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> answer;

        for(int i = 0; i < len; i++){
            int start = i+1;
            int end = len-1;

            while(start < end){

                if((nums[start] + nums[end] + nums[i]) < 0)
                    start++;
                else if((nums[start] + nums[end] + nums[i]) > 0)
                    end--;
                else{
                    answer.push_back({nums[i], nums[start], nums[end]});
                    start++;
                    end--;
                    while((start < end) && (nums[start-1] == nums[start])) start++;
                    while((start < end) && (nums[end+1] == nums[end])) end--;
                }
            }

            while(i < len-1){
                if(nums[i] == nums[i+1])
                    i++;
                else break;
            }
        }
        return answer;
    }
};