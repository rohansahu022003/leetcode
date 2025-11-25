class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end(),[](vector<int>const& a, vector<int>const& b){
        return a[1]<b[1];
       });
       vector<int>st;

       for(auto i : intervals){
        int k=0;
        if(st.empty()){
            st.push_back(i[1]-1);
            st.push_back(i[1]);
          
        }
       else {
        for(auto s: st){
            if(i[0]<=s && i[1]>=s)k++;
        }
            if(k==1){
                if(find(st.begin(),st.end(),i[1])!=st.end())st.push_back(i[1]-1);
                else st.push_back(i[1]);
            }
            else if(k==0){
            st.push_back(i[1]-1);
            st.push_back(i[1]);
            }
            
        
        }
       }
       
       return st.size();
    }
};