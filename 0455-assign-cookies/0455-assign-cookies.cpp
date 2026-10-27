class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int gs=g.size(),ss=s.size(),i=0,j=0;
        while(i<gs && j<ss){
            if(s[j]>=g[i]){
                i++;
            }
            j++;

        }
        return i;
    }
};