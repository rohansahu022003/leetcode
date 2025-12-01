class Solution {
    public:
    bool isop(string c){
        if(c=="+" || c=="-" || c=="*" || c=="/")return true;
        return false;
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0; i<tokens.size(); i++){
            if(isop(tokens[i])){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int c;
                if(tokens[i]=="+")c=b+a;
                else if(tokens[i]=="-")c=b-a;
                else if(tokens[i]=="*")c=b*a;
                else c=b/a;
                st.push(c);
            }
            else{
                int num=stoi(tokens[i]);
                st.push(num);
            }
        }
        int ans=st.top();
        return ans;
    }
};