class Bank {
    public:
    unordered_map<int,long long> b;
public:
    Bank(vector<long long>& balance) {
        for(int i=0; i<balance.size(); i++){
            b[i+1]=balance[i];
        }
    }
    
    bool transfer(int account1, int account2, long long money) {
       if(!b.count(account1) || !b.count(account2) || b[account1]<money)return false;
        b[account1]-=money;
        b[account2]+=money;
        return true;
    }
    
    bool deposit(int account, long long money) {
       if(!b.count(account))return false;
        b[account]+=money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if(!b.count(account) || b[account]<money)return false;
        b[account]-=money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */