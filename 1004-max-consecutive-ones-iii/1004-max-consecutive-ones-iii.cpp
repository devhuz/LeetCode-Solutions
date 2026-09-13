class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int i=0,max1=0,zc=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]==0)
            {
                zc++;
            }
            if(zc>k)
            {
                if(nums[i]==0)
                {
                    zc--;
                }
                i++;
            }
                max1=max(max1,j-i+1);
            
        }
         return max1;
    }
};