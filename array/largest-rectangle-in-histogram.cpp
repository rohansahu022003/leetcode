class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        deque<int>st;
        int ans=0;
        int low=INT_MAX;
        for(int i=0; i<h.size(); i++){
            if(st.empty() || st.back()<=h[i])st.push_back(h[i]);
            else{
            while(st.size() && st.back()>h[i]){
                int a=st.front()*st.size();
             ans=max(ans, a);
             st.pop_front();
            }
            st.push_back(h[i]);
            }
            low=min(low,h[i]);
        }
        while(!st.empty()){
            int a=st.front()*st.size();
             ans=max(ans, a);
             st.pop_front();
        }
        ans=max(ans,low*n);
        return ans;
    }
};