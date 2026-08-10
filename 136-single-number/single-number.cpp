class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val = 0 ;
        for (int num : nums ) { // for each loop
            val = val^num ; // XOR manipulators
        }
        return val;
    }
};