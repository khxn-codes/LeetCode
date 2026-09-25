class Solution {
public:
    bool isPalindrome(int x) {
        long long res=0;
        int temp=x;
        while(x>0)
        {
            res=res*10+x%10;
            x/=10;
        }
        if(temp==res)
        {
            return true;
        }
        return false;
    }
};