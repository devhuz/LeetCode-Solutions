class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        int n=a.size();
        vector<int> b(n,0);
        int pos=0,neg=1;
        for(int i=0;i<n;i++){
            if(a[i]>0){
                b[pos]=a[i];
                pos=pos+2;

            }
            else{
                b[neg]=a[i];
                neg+=2;
            }
        }
        return b;
        
    }
};