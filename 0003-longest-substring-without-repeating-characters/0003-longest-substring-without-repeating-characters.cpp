class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxln=0,l=0,r=0,n=s.size();
        int hash[256];
        for(int i=0;i<n;i++){
            hash[s[i]]=-1;
}
          while(r<n){
            if((hash[s[r]])!=-1) l=max(hash[s[r]]+1,l);
         maxln=  max(maxln,r-l+1);
            hash[s[r]]=r;
            r++;
        }return maxln;
        }
    
};