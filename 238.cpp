class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> output(len);
        output[0] = nums[0];
        for(int i = 1; i < len; i++){
            output[i] = output[i-1] * nums[i];
        }
        int product = 1;
        for(int i = len-1; i > 0; i--){
            output[i] = output[i-1] * product;
            product = product * nums[i];

        }
        output[0] = product;
        return output;
    }
};