class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    using T=pair<int,int>;
    priority_queue<T,vector<T>,greater<T>>pq;

    for(int i=0; i<arr.size(); i++){
        pq.push({abs(arr[i]-x),arr[i]});
    }
    vector<int>ans;
    while(k){
        int element=pq.top().second;
        ans.push_back(element);
        pq.pop();
        k--;
    }
    sort(ans.begin(),ans.end());
    return ans;
    }
};