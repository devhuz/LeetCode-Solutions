class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;

        while (l <= r) {           
            int m = l + (r - l) / 2;           
            if (nums[m] == target)
                return m;           
            if (nums[l] <= nums[m]) {
                // Target lies inside left sorted half
                if (nums[l] <= target && target < nums[m]) {
                    r = m - 1;
                }
                else {
                    l = m + 1;
                }
            }
            // Otherwise right half is sorted
            else {
                // Target lies inside right sorted half
                if (nums[m] < target && target <= nums[r]) {
                    l = m + 1;
                }
                else {
                    r = m - 1;
                }
            }
        }

        return -1;
        
    }
};