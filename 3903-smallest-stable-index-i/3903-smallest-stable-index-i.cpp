class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            mini=INT_MAX;
            for(int j=i;j<nums.size();j++){
                mini=min(mini,nums[j]);
            }
         if((maxi-mini)<=k) return i;
}
            return -1;
    }
};