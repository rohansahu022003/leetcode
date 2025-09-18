class TaskManager {
    unordered_map<int,int>tasktouser;
    unordered_map<int,int>tasktopriority;
    unordered_map<int,set<pair<int,int>>>usertopriority;
    set<pair<int,int>,greater<>>globalranking;
public:
    TaskManager(vector<vector<int>>& tasks) {
       for(int i=0; i<tasks.size(); i++){
        tasktouser[tasks[i][1]]=tasks[i][0];
        tasktopriority[tasks[i][1]]=tasks[i][2];
        usertopriority[tasks[i][0]].insert({-tasks[i][2],tasks[i][1]});
        globalranking.insert({tasks[i][2],tasks[i][1]});
       } 
    }
    
    void add(int userId, int taskId, int priority) {
        tasktouser[taskId]=userId;
        tasktopriority[taskId]=priority;
        usertopriority[userId].insert({-priority,taskId});
        globalranking.insert({priority,taskId});
    }
    
    void edit(int taskId, int newPriority) {
        int userid=tasktouser[taskId];
        int oldpriority=tasktopriority[taskId];
        tasktopriority[taskId]=newPriority;
        usertopriority[userid].erase({-oldpriority,taskId});
        usertopriority[userid].insert({-newPriority,taskId});
        globalranking.erase({oldpriority,taskId});
        globalranking.insert({newPriority,taskId});

        
    }
    
    void rmv(int taskId) {
        int userid=tasktouser[taskId];
        int p=tasktopriority[taskId];
        tasktouser.erase(taskId);
        tasktopriority.erase(taskId);
        usertopriority[userid].erase({-p, taskId});
        globalranking.erase({p,taskId});
    }
    
    int execTop() {
         if (globalranking.empty()) return -1;
        auto best=globalranking.begin();
        int besttask=best->second;
        globalranking.erase(best);
        return tasktouser[besttask];
        
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
 * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */