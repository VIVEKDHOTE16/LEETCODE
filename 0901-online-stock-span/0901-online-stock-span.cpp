class StockSpanner {
public:
    vector<int> prices;
    stack<int> s;
    int i;

    StockSpanner() {
        i=0;
        
    }
    
    int next(int price) {
        prices.push_back(price);
        int ans; 
        while(s.size()>0 && prices[s.top()]<=price){
            s.pop();
        }
        if(s.empty()){
            ans=i+1;
        }
        else{
            ans=i-s.top();
        }
        s.push(i);
        i++;

        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */