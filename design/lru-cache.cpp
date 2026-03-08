class LRUCache {
    queue<int>lruq;
    unordered_map<int,int>lrum;
    int k;
public:
    LRUCache(int capacity) {
        k=capacity;
    }
    
    int get(int key) {
        int ans=-1;
       if(lrum.find(key)!=lrum.end()) ans=lrum[key];
        return ans;
    }
    
    void put(int key, int value) {
        if(lrum.find(key)!=lrum.end()){
            
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */