int sum(vector<int>& b,int c){
    int s=0;
    for(int i=0;i<b.size();i++){
        s+=(b[i]+c-1)/c;
    }
    return s;
}
class Solution {
public:
    int smallestDivisor(vector<int>& a, int l) {
        if (a.size() > l) return -1;
        else{
        int low=1;
        int high = *max_element(a.begin(), a.end());
        while(low<=high){
            int mid=(low+high)/2;
            if(sum(a,mid)<=l) high=mid-1;
            else low=mid+1;
        }
        return low;
        }


        
    }
};