class Solution {
    public:
        int compress(vector<char>& chars) {
            vector<char> char1;
            int count = 1;
            int j = 1;
            for(int i = 0; i < chars.size(); i++){
                 if (j == chars.size() || chars[i] != chars[j]) {
                    char1.push_back(chars[i]);
                    if(count>1){
                        string c = to_string(count);
                        for (char ch : c) {
                       char1.push_back(ch);
                        }
    
                    }
                    count = 1;
                 }
                 else{
                    count++;
                 }
                
                j++;
            }
            for (int k = 0; k < char1.size(); k++) {
                chars[k] = char1[k];
            }
    
            return char1.size();
        }
    };