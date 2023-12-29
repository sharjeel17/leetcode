class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string& token: tokens){
            
            if(token == "+"){
                int operand1 = st.top();
                st.pop();
                int operand2 = st.top();
                st.pop();
                st.push(operand2 + operand1);
            }
            else if(token == "-"){
                int operand1 = st.top();
                st.pop();
                int operand2 = st.top();
                st.pop();
                st.push(operand2 - operand1);
            }
            else if(token == "*"){
                int operand1 = st.top();
                st.pop();
                int operand2 = st.top();
                st.pop();
                st.push(operand2 * operand1);
            }
            else if(token == "/"){
                int operand1 = st.top();
                st.pop();
                int operand2 = st.top();
                st.pop();
                st.push(operand2 / operand1);
            }
            else{
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};