class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        deque<int>st;
        vector<int>ans;
        for(int i=0; i<prices.size(); i++){
            if(st.empty())st.push_back(prices[i]);
            else{
                if(st.back()>=prices[i]){
                    while(!st.empty()){
                        int a=st.front()-prices[i];
                        st.pop_front();
                      if(a>0)  ans.push_back(a);
                      else ans.push_back(0);
                    }
                    st.push_back(prices[i]);
                }
                else{
                    st.push_back(prices[i]);
                }
            }
        }
        while(!st.empty()){
            ans.push_back(st.front());
            st.pop_front();
        }
        return ans;
    }
};