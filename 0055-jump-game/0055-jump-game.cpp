class Solution {
public:
    bool canJump(vector<int>& n) {
        int s=n.size();
        int c=0;
        for(int i=0;i<s;i++){
            if (i>c) return false;
            c=max(c,i+n[i]);
        }
return true;
        
    }
};