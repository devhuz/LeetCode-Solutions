class Solution {
public:
    vector<int> nextGreaterElements( vector<int>& nums2) {
        vector<int> res(nums2.size());
        stack<int> s;
        int d=0;

        for (int i = 2*nums2.size() - 1; i >= 0; i--) {
            while (!s.empty() && s.top() <= nums2[i%nums2.size()]) {
                s.pop();
            }
            if(i<nums2.size()){
             d= s.empty() ? -1 : s.top() ;
             res[i]=d;
            }
            s.push(nums2[i%nums2.size()]);
        }
        return res;

        
        
    }
};