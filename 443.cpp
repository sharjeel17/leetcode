class Solution {
public:
    int compress(vector<char>& chars) {
        int length = chars.size();
        int leftP = 0;
        int rightP = 0;

        while(rightP < length){
            char currentChar = chars[rightP];
            int charCount = 0;

            while(rightP < length){
                if(currentChar != chars[rightP]){
                    break;
                }
                charCount++;
                rightP++;   
            }

            chars[leftP] = currentChar;
            leftP++;
            string strNum = to_string(charCount);
            
            if(charCount > 1){
                for(char num: strNum){
                    chars[leftP] = num;
                    leftP++;
                }
            }
        }

        //leftP is the next empty index position to fill
        //also meaning it's the length of the vector
        return leftP;
    }
};