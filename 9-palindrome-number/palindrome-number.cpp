class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }

        long original = x;
        long rev = 0;
        long d;

        while(x!=0) {
            d = x % 10;
            rev = (rev * 10) + d;
            x = x / 10;
        }

        return original == rev;
    }
};