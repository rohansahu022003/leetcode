class TaskManager {
    unordered_map<int,pair<int,int>>taskto;
    priority_queue<tuple<int,int,int>>pq;
public:
    TaskManager(vector<vector<int>>& tasks) {
       for(int i=0; i<tasks.size(); i++){
        taskto[tasks[i][1]]={tasks[i][0],tasks[i][2]};
        pq.push({tasks[i][2],tasks[i][1],tasks[i][0]});
       } 
    }
    
    void add(int userId, int taskId, int priority) {
      taskto[taskId]={userId,priority};
        pq.push({priority,taskId,userId});
    }
    
    void edit(int taskId, int newPriority) {
       taskto[taskId].second=newPriority;
       int userid=taskto[taskId].first;
       pq.push({newPriority, taskId,userid});

        
    }
    
    void rmv(int taskId) {
       taskto.erase(taskId);
    }
    
    int execTop() {
       while(!pq.empty()){
        auto [p,t,u]=pq.top();
        pq.pop();
        if(taskto.find(t)!=taskto.end() && taskto[t].second==p){
            taskto.erase(t);
            return u;
        }
       }
         return -1;
        
    }
  
};