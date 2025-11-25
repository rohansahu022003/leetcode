class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end(),[](vector<int>const& a, vector<int>const& b){
        return a[1]<b[1];
       });

       vector<int>st;

       for(auto i : intervals){
        if(st.empty()){
            st.push_back(i[1]-1);
            st.push_back(i[1]);
          
        }
        else if(i[0]<st.back())continue;
        else if(i[0]==st.back())st.push_back(i[1]);
        else if(i[0]>st.back()){
            st.push_back(i[1]-1);
            st.push_back(i[1]);
           
            }
       }
       return st.size();
    }
};