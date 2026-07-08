int cap(vector<int>& a, int d){
    int day=1,load=0;
    for(int i=0;i<a.size();i++){
        if(load+a[i]>d){
            load=a[i];
            day=day+1;
        }
        else{
            load+=a[i];
        }
        
    }
    return day;
};





class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(), weights.end());
        int high=accumulate(weights.begin(), weights.end(), 0);
        while(low<=high){
            int mid=(low+high)/2;
            if(cap(weights,mid)<=days) high=mid-1;
            else low=mid+1;
        }
        return low;
        


        
    }
};