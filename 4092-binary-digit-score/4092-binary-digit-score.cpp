class Solution {
public:
    int calculateScore(int a, int b) {
        int s1 = countSetBits(a);
        int s2 = countSetBits(b);
        if (s1 >= s2) {
            return s1 * s2;
        }
        return s2 / s1;
    }

private:
    int countSetBits(int n) {
        int res = 0;
        while (n > 0) {
            if (n % 2 == 1) {
                res++;
            }
            n /= 2;
        }
        return res;
    }
};