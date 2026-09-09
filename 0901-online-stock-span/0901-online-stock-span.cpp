class StockSpanner {
public:
    StockSpanner(){}
    stack<pair<int,int>> st;
    int next(int price) {
        if(st.empty()){
            st.push({price,1});
            return 1;
        }
        if(price<st.top().first){
            st.push({price,1});
            return 1;
        }
        int sum=1;
        if(price>=st.top().first){
            while(!st.empty() && st.top().first<=price){
                sum+=st.top().second;
                st.pop();
            }
            st.push({price,sum});
        }
        return sum;
    }
};
/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */