class RandomizedSet {
    unordered_map<int,int>mpp;
    vector<int>arr;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mpp.find(val)!=mpp.end())return false;
        arr.push_back(val);
        mpp[val]=arr.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mpp.find(val)==mpp.end())return false;
        int indx=mpp[val];
        int last=arr.back();

        arr[indx]=last;
        mpp[last]=indx;

        arr.pop_back();
        mpp.erase(val);
        
        return true;
    }
    
    int getRandom() {
       return arr[rand()%arr.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */