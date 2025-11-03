class Solution {
public:
    int minCost(string colors, vector<int>& n) {
        int ans=0;
        int i=0;
        int j=1;
        while(j<colors.size()){
            while(colors[i]=='0')i++;
            if(colors[i]==colors[j]){
                ans+=min(n[i],n[j]);
                if(n[i]<n[j])colors[i]='0';
                else colors[j]='0';
                j++;

            }
            
            else {
                i++;
                j++;
            }
        }
        return ans;
    }
};