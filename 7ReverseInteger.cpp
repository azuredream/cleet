class Solution {
public:
    int reverse(int x) {
        if (x < pow(-2, 31) && x > (pow(2, 31) - 1)) {
            return 0;
        }
        long long int longx = (long long int) x;
        long long int result = 0;
        bool Negative = false;
        if (longx < 0) {
            Negative = true;
            longx *= -1;
        }

        while(longx) {
            result = result*10 + (longx%10);
            longx = longx/10;
        }
        if (Negative == true) {
            result *= -1;
        }
        if (result < pow(-2, 31) || result > (pow(2, 31) - 1)) {
            return 0;
        }
        return (int)result;
    }
};