class Solution {
public:
    double myPow(double x, int n) {
        double result = 1.0; // Initialize result to handle multiplication
        if (n == 1) {
            result = x;
        }
        if (n == 0) {
            result = 1;
        }
        if (n > 0) {
            result = x; // Initialize result for positive powers
            for (int i = 1; i < n; i++) {
                result = x * result;
            }
        }
        if (n == -1) {
            result = 1 / x;
        }
        if (n < -1) {
            result = 1 / x; // Initialize result for negative powers
            for (int i = -1; i > n; i--) {
                result = (1 / x) * result;
            }
        }
        return result;
    }
};
