struct TupleHash {
    size_t operator()(const tuple<int,int,int>& t) const {
        auto [a,b,c] = t;
        return hash<int>()(a) ^ (hash<int>()(b) << 1) ^ (hash<int>()(c) << 2);
    }
};
class Router {
    queue<tuple<int,int,int>>routequeue;
    unordered_set<tuple<int,int,int>,TupleHash>routeset;
    unordered_map<int,pair<int,int>>routemap;
    int k=0;
public:
    Router(int memoryLimit) {
        k=memoryLimit;
    }
    
    bool addPacket(int source, int destination, int timestamp) {
        if(routeset.find({source,destination,timestamp})!=routeset.end())return false;
        routequeue.push({source,destination,timestamp});
        routemap[source]={destination,timestamp};
        routeset.insert({source,destination,timestamp});
        if(routequeue.size()>k){
            int it=get<0>(routequeue.front());
            routemap.erase(it);
            routeset.erase(routequeue.front());
            routequeue.pop();
        }
        return true;
    }
    
    vector<int> forwardPacket() {
        if(routequeue.empty())return {};
        auto [s,d,t]=routequeue.front();
        routeset.erase(routequeue.front());
        routemap.erase(s);
        routequeue.pop();
        return {s,d,t};
    }
    
    int getCount(int destination, int startTime, int endTime) {
        int count=0;
        for(auto m: routemap){
            if(m.second.first==destination && startTime<=m.second.second &&
           m.second.second<=endTime)count++;
        }
        return count;
    }
};

/**
 * Your Router object will be instantiated and called as such:
 * Router* obj = new Router(memoryLimit);
 * bool param_1 = obj->addPacket(source,destination,timestamp);
 * vector<int> param_2 = obj->forwardPacket();
 * int param_3 = obj->getCount(destination,startTime,endTime);
 */