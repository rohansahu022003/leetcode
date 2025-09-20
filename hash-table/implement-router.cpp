struct TupleHash {
    size_t operator()(const tuple<int,int,int>& t) const {
        auto [a,b,c] = t;
        return hash<int>()(a) ^ (hash<int>()(b) << 1) ^ (hash<int>()(c) << 2);
    }
};

class Router {
    queue<tuple<int,int,int>> routequeue;
    unordered_set<tuple<int,int,int>, TupleHash> routeset;
    unordered_multimap<int, pair<int,int>> routemap;
    int k=0;

public:
    Router(int memoryLimit) {
        k = memoryLimit;
    }

    bool addPacket(int source, int destination, int timestamp) {
        if (routeset.find(make_tuple(source,destination,timestamp)) != routeset.end()) return false;

        routequeue.push(make_tuple(source,destination,timestamp));
        routeset.insert(make_tuple(source,destination,timestamp));
        routemap.emplace(source, make_pair(destination, timestamp));

        if (routequeue.size() > (size_t)k) {
            auto old = routequeue.front();
            routequeue.pop();
            routeset.erase(old);

            int s = get<0>(old);
            int d = get<1>(old);
            int t = get<2>(old);

            auto range = routemap.equal_range(s);
            for (auto it = range.first; it != range.second; ++it) {
                if (it->second.first == d && it->second.second == t) {
                    routemap.erase(it);
                    break;
                }
            }
        }

        return true;
    }

    vector<int> forwardPacket() {
        if (routequeue.empty()) return {};
        auto [s,d,t] = routequeue.front();
        routequeue.pop();

        routeset.erase(make_tuple(s,d,t));

        auto range = routemap.equal_range(s);
        for (auto it = range.first; it != range.second; ++it) {
            if (it->second.first == d && it->second.second == t) {
                routemap.erase(it);
                break;
            }
        }

        return {s,d,t};
    }

    int getCount(int destination, int startTime, int endTime) {
        int count = 0;
        for (auto &m : routemap) {
            int dest = m.second.first;
            int time = m.second.second;
            if (dest == destination && startTime <= time && time <= endTime) {
                count++;
            }
        }
        return count;
    }
};
