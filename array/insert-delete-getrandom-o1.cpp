class RandomizedSet {
    unordered_map<int,int>check;
    vector<int>arr;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(check.find(val)!=check.end())return false;
        arr.push_back(val);
        check[val]=arr.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(check.find(val)==check.end())return false;
        int i=check[val];
        int last=arr.back();
        arr[i]=last;
        check[last]=i;

        arr.pop_back();
        check.erase(val);
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