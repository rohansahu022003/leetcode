class TaskManager {
    unordered_map<int,pair<int,int>> taskto; // taskId -> {userId, priority}
    priority_queue<tuple<int,int,int>> pq;   // (priority, taskId, userId)

public:
    TaskManager(vector<vector<int>>& tasks) {
        for (auto &t : tasks) {
            int userId = t[0], taskId = t[1], priority = t[2];
            taskto[taskId] = {userId, priority};
            pq.push({priority, taskId, userId});
        }
    }
    
    void add(int userId, int taskId, int priority) {
        taskto[taskId] = {userId, priority};
        pq.push({priority, taskId, userId});
    }
    
    void edit(int taskId, int newPriority) {
        int userId = taskto[taskId].first;
        taskto[taskId].second = newPriority;
        pq.push({newPriority, taskId, userId});
    }
    
    void rmv(int taskId) {
        taskto.erase(taskId); // lazy delete
    }
    
    int execTop() {
        while (!pq.empty()) {
            auto [p, t, u] = pq.top();
            pq.pop();
            if (taskto.find(t) != taskto.end() && taskto[t].second == p) {
                return u;
            }
        }
        return -1; 
    }
};
