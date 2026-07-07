class Solution {
public:
    long long sumAndMultiply(int n) {
        int y= 1;
        int x = 0;
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                x += digit * y;
             y *= 10;
                sum += digit;
            }
            n /= 10;
        }
        return 1LL * x * sum;
    }
};