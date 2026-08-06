class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) { // Check string is empty or not 
            return "";
        }
        for (int i = 0 ; i < strs[0].size() ; i++) { // Outer loop 
            char current = strs[0][i];
            for (int j = 0 ; j < strs.size() ; j++) { // inner loop 
                if (i >= strs[j].size() || strs[j][i] != current) {
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0];
    }
};