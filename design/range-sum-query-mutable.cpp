class NumArray {
    vector<int>prefix;
public:
    NumArray(vector<int>& nums) {
        int n=nums.size();
        prefix.resize(n,0);
        prefix[0]=nums[0];
        for(int i=1; i<n;i++){
            prefix[i]=nums[i]+prefix[i-1];
        }

    }
    
    void update(int index, int val) {
        int old=prefix[index];
        if(index==0)prefix[index]=val;
       else prefix[index]=prefix[index-1]+val;
       int change=prefix[index]-old;
        for(int i=index+1; i<prefix.size(); i++){
            prefix[i]+=change;
        }
    }
    
    int sumRange(int left, int right) {
        int sum;
        if(left==0)sum=prefix[right];
        else sum=prefix[right]-prefix[left-1];
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */