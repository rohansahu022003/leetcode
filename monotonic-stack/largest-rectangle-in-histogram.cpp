class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        deque<int>st;
        int ans=0;
        int low=INT_MAX;
        int j=1;
        for(int i=0; i<h.size(); i++){
            if(st.empty() || st.back()<=h[i])st.push_back(h[i]);
            else{
                int a;
                a=h[i]*(st.size()+1);
                ans=max(ans,a);
            while(st.size() && st.back()>h[i]){
                a=st.front()*st.size();
             ans=max(ans, a);
             st.pop_front();
            }
        if(h[i]>0)st.push_back(h[i]);
            }
           low=min(low,h[i]);
           ans=max(ans,low*j);
           j++;
           if(h[i]==0){
            low=INT_MAX;
            j=1;
           }
        }
        while(!st.empty()){
            int a=st.front()*st.size();
             ans=max(ans, a);
             st.pop_front();
        }

        return ans;
    }
};