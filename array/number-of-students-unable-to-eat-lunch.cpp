class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>s;
        queue<int>sand;
        unordered_map<int,int>freq;
        for(int i=0; i<students.size(); i++){
            s.push(students[i]);
            freq[students[i]]++;
            sand.push(sandwiches[i]);
        }
        while(freq.count(sand.front())){
            if(s.front()==sand.front()){
                freq[s.front()]--;
                if(freq[s.front()]==0)freq.erase(s.front());
                s.pop();
                sand.pop();
            }
            else{
                int t=s.front();
                s.pop();
                s.push(t);
            }
        }
        int ans=0;
        for(auto f: freq){
            ans+=f.second;
        }
        return ans;
    }
};