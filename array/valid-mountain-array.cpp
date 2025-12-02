class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3)return false;
        int si=0;
        int sd=0;
        for(int i=0; i<n-1;i++){
            if(arr[i]<arr[i+1] && sd>0)return false;
                else if(arr[i]<arr[i+1]){
                    si++;
                }
            else if(arr[i]>arr[i+1]){
                sd++;
            }
        }
        return (sd && si);
    }
};