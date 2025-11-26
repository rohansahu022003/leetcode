class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int>freq;

        for(int i=0; i<answers.size(); i++){
            freq[answers[i]]++;
        }
int ans=0;
        for(auto f: freq){
           int i=ceil(double(f.second)/double(f.first+1));
           
           ans+=(f.first+1)*i;
        }
        return ans;
    }
};