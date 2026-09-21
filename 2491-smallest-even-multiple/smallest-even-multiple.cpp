class Solution {
public:
    int smallestEvenMultiple(int n) {
        int output;

        if (n % 2 == 0) {
            output = n;
        }
        else {
            output = 2 * n;
        }

        return output;
    }
};