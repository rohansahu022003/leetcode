class MedianFinder {
    priority_queue<double>lower;
    priority_queue<double,vector<double>,greater<double>>upper;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(lower.empty() || num<=lower.top())lower.push(num);
        else upper.push(num);

        if(lower.size()>upper.size()+1){
            upper.push(lower.top());
            lower.pop();
        }
        else if(upper.size()>lower.size()){
            lower.push(upper.top());
            upper.pop();
        }
        
    }
    
    double findMedian() {
        double ans;
        if(upper.size()==lower.size()){
          ans=(lower.top()+upper.top())/2.0;  
        }
        else ans=lower.top();
        return ans;
    }
};
