class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        int res = INT_MAX;
        for (int i = 0; i < n; i += 2) {
            string merged_int = to_string(nums[i]) + to_string(nums[i + 1]);
            int value = stoi(merged_int);
            res = min(res, value);
        }
        return res;
    }
};