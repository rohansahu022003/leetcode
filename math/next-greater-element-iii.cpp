class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        int l=s.size();
        int pivot=-1;
        int pivotvalue=0;
long long ans=-1;
        for(int i=l-1; i>0 ; i--){
         int a=s[i]-'0';
         int b=s[i-1]-'0';
         if(a>b){
         pivot=i-1;
         break;
         }
        }
        if(pivot==-1)return -1;
        pivotvalue=s[pivot]-'0';
        for(int i=l-1; i>pivot; i-- ){
         int a=s[i]-'0';
         if(a>pivotvalue){
            swap(s[pivot], s[i]);
            break;
         }
        }
        reverse(s.begin()+pivot+1, s.end());
        ans=stoll(s);
        cout<<ans;
        if(ans>INT_MAX)return -1;
    return (int)ans;
    }
};