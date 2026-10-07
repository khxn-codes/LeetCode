class Solution {
public:
    int vowelConsonantScore(string s) {
        int c=0,v=0;
        for(char ch:s)
        {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            {
                v++;
            }
            else if(ch>='b' && ch<='z')
            {
                c++;
            }
        }
        if(c>0)
        {
            return floor(v/c);
        }
        return 0;
    }
};