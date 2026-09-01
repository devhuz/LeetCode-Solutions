class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        string s=moves;
        for(int i=0;i<moves.size();i++){
            if(s[i]=='U') x++;
        
            else if(s[i]=='D') x--;
            else if(s[i]=='R') y++;
            else if(s[i]=='L') y--;



        }
        if(x==0 && y==0)  return true;
        else return false;
    }
};