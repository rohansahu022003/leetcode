class MedianFinder {
    multiset<double>arr;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        arr.insert(num);
        
    }
    
    double findMedian() {
        double ans;
        int n=arr.size();
        auto it=arr.begin();

        advance(it,n/2);
        if(n%2==0){
            auto it2=it;
            it2--;
            ans=(*it2+*it)/2.0;
        }
        else ans= *it;
        return ans;
    }
};
