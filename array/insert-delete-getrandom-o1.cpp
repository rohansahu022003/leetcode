class RandomizedSet {
    unordered_map<int,int>mpp;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mpp.find(val)!=mpp.end())return false;
        mpp[val]++;
        return true;
    }
    
    bool remove(int val) {
        if(mpp.find(val)==mpp.end())return false;
        mpp.erase(val);
        return val;
    }
    
    int getRandom() {
        int ans;
        for(auto m: mpp){
ans=m.first;
        }
        return ans;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */