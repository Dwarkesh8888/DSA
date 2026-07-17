class Solution {
public:
    int reverse(int x) {
        int rev =  0 ; 
        while (x!=0) { // runs this loop untill it would be zero
            int ld = x%10; // Last Digit
            if (rev > INT_MAX/10 || rev < INT_MIN/10)
                return 0;
            rev = rev * 10 + ld ; // store reverse number
            x = x /10 ;
        }
        return rev;
    }
};