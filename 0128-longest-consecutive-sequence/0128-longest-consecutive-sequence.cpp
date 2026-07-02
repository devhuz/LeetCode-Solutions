class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int n=a.size(), l=1;
        unordered_set<int> st;
        if(n==0) return 0;
        for(int i=0;i<n;i++){
            st.insert(a[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int c=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    x++;
                    c++;
                }
                l=max(l,c);

            }
        }

    return l;  
    }
};