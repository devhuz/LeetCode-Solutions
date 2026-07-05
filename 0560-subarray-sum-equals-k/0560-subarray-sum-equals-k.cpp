class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int n=a.size(),c=0,s=0;
        unordered_map<int,int> mpp;
        mpp[0]=1;
        for(int i=0;i<n;i++){
            s+=a[i];
            int remove=s-k;
            c+=mpp[remove];
            mpp[s]+=1;


        }

    return c;    
    }
};