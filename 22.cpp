class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        helper(answer, "" , n, n);
        return answer;
    }

private:
    void helper(vector<string>& answer, string current ,int open, int close){
        if(close == 0 && open == 0){
            answer.push_back(current);
            return;
        }
        if(close == 0)
            return;
        
        if(open > 0) helper(answer, current+"(", open-1, close);
        //need to have more open used if we want to add closed
        //e.g invalid ")(" will use close first, meaning open > close at first iteration
        if(open < close) helper(answer, current+")", open, close-1);
        return;
    }

};