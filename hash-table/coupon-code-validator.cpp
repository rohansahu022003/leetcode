class Solution {
    public:
    bool coderight(string& a){
        if(a.size()==0)return false;
    for(char c : a) {
        if(!(
            (c >= 'a' && c <= 'z') ||
            (c >= 'A' && c <= 'Z') ||
            (c >= '0' && c <= '9')
        ) && c!='_') return false;
    }
    return true;
    }
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        using T=pair<string,string>;
        priority_queue<T,vector<T>,greater<T>>pq;

        vector<string>ans;

        for(int i=0; i<code.size(); i++){
           if(coderight(code[i]) && (businessLine[i]=="electronics" || businessLine[i]=="grocery" || businessLine[i]=="pharmacy" || businessLine[i]=="restaurant") && isActive[i]){
            pq.push({businessLine[i],code[i]});
           } 
        }
        while(!pq.empty()){
            string a=pq.top().second;
            pq.pop();
            ans.push_back(a);
        }
        return ans;
    }
};