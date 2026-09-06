class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size(),l=0,lmax=0,r=n-1,rmax=0,t=0;
        while(l<r){
            if(h[l]<=h[r]){
                if(lmax>=h[l]) t+=lmax-h[l];
                else lmax=h[l];
                l++;
            }
            else{
                
                if(rmax>=h[r]) t+=rmax-h[r];
                else rmax=h[r];
                r--;
            }
        }
        return t;
    }
};