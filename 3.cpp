class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = 0;
        int max = 0;
        int start = 0;
        unordered_map<char,int> map;
        for(char& c: s){
            if(map[c] == 1){
                while(map[c] != 0){
                    map[s[start]] = 0;
                    start++;
                    length--;
                }
            }
            
            map[c] = 1;
            length++;
            
            if(length > max)
                max = length;
        }
        return max;
    }
};