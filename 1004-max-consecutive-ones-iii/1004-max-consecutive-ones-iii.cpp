class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0,c=0,ml=0,n=nums.size();
        
        while(r<n){
             
             
            if(nums[r]==0){
                c++;
            
            }
            

            
            if(c>k){
                  if(nums[l]==0){
                    
                    c--;
                  }
                  l++;
            }
            if(c<=k) ml=max(ml,r-l+1);
r++;
        }
        return ml;

        
    }
};