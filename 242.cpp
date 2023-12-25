class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t) return true;

        return false;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char,int> counts;
        for(int i = 0; i < s.length(); i++){
            counts[s[i]]++;
            counts[t[i]]--;
        }

        for(auto count: counts){
            if(count.second != 0) return false;
        }
        return true;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<int,int> counts;
        for(int i = 0; i < s.length(); i++){
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }

        for(auto count: counts){
            if(count.second != 0) return false;
        }
        return true;
    }
};