class Solution {
public:
    bool isHappy(int n) {
        int loops = 0;
        
        while (n != 1 && loops < 100) {
            int res = 0;
            int temp = n;
            
            while (temp > 0) {
                int ld = temp % 10;
                res += (ld * ld);
                temp /= 10;
            }
            
            n = res;
            loops++;
        }
        
        return n == 1;
    }
};