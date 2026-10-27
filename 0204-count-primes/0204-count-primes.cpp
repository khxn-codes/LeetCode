class Solution {
public:
    int countPrimes(int n) {
        int i=0,res=0;
        while(i<n)
        {
            if(isPrime(i))
            {
                res++;
            }
            i++;
        }
        return res;
    }
private:
    bool isPrime(int i)
    {
        if(i<=1)
        {
            return false;
        }
        if(i==2 || i==3)
        {
            return true;
        }
        if(i%2==0 || i%3==0)
        {
            return false;
        }
        for(int j=5;j*j<=i;j+=6)
        {
            if(i%j==0 || i%(j+2)==0)
            {
                return false;
            }
        }
        return true;
    }
};