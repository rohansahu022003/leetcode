class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),
        [](const vector<int>& a, const vector<int>&b){
            return a[1]<b[1];
        });
        unordered_set<int>choosen;
        for(int i=0; i<intervals.size();i++){
            int k=0;
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(choosen.empty()){
                choosen.insert(end);
                choosen.insert(end-1);
            }
           else if(start>intervals[i-1][1] && i>0){
            choosen.insert(end);
            choosen.insert(end-1);
           }
           else{
            for(auto c:choosen){
                if(c>=start && c<=end)k++;
            }
        if(k==1){
            if(choosen.find(end)!=choosen.end())choosen.insert(end-1);
            else choosen.insert(end);
        }
        else if(k==0){
        choosen.insert(end);
        choosen.insert(end-1);
        }
           }
           

           
        }
        int ans=choosen.size();
        return ans;
    }
};