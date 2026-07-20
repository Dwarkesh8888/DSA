class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char, int> covt;

        covt['I'] = 1;
        covt['V'] = 5;
        covt['X'] = 10;
        covt['L'] = 50;
        covt['C'] = 100;
        covt['D'] = 500;
        covt['M'] = 1000;

        int result = covt[s[s.length() - 1]];

        for (int i = s.length() - 2; i >= 0; i--) {

            if (covt[s[i]] < covt[s[i + 1]]) {
                result -= covt[s[i]];
            } else {
                result += covt[s[i]];
            }

        }

        return result;
    }
};