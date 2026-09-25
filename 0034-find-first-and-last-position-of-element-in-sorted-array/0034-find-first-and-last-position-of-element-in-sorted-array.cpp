class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        if (nums.size() == 0) return {-1,-1};
        int low = 0;
        int high = nums.size()-1;
        int mid;
        int l1=-1 , l2=-1;

        while (low <= high)
        {
            mid = (low+high)/2;
            if (nums[mid] == target)
            {
                l1 = mid;
                high = mid - 1;
            }
            else if (nums[mid] > target)
                high = mid - 1;
            else
                low  = mid + 1;
        }

        low = 0;
        high = nums.size()-1;
        while (low <= high)
        {
            mid = (low+high)/2;
            if (nums[mid] == target)
            {
                l2 = mid;
                low = mid+ 1;
            }
            else if (nums[mid] > target)
                high = mid - 1;
            else
                low  = mid + 1;
        }

        return {l1 , l2};
    }
};