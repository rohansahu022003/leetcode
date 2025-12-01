class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int>st;

        for(int i=0; i<t.size(); i++){
            while(st.size() && t[st.back()]<t[i]){
                t[st.back()]=i-st.back();
                st.pop_back();
            }
            st.push_back(i);
        }
        while(st.size()){
            t[st.back()]=0;
            st.pop_back();
        }
        return t;
    }
};