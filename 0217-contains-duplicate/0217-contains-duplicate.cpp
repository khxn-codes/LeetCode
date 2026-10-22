class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto num:nums)
        {
            mp[num]++;
        }
        for(auto p:mp)
        {
            int val=p.first;
            int count=p.second;
            if(count>=2)
            {
                return true;
            }
        }
        return false;
    }
};