class MedianFinder {
    vector<double>arr;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        arr.push_back(num);
        sort(arr.begin(), arr.end());
    }
    
    double findMedian() {
        double ans;
        if(arr.size()%2==0){
            ans=(arr[arr.size()/2]+arr[(arr.size()/2)-1])/2;
        }
        else{
            ans=arr[arr.size()/2];
        }
        return ans;
    }
};
