class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto S:strs)
        {
            string temp=S;
            sort(S.begin(),S.end());
            mp[S].push_back(temp);
        }
        vector<vector<string>> ans;
        for(auto x:mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};