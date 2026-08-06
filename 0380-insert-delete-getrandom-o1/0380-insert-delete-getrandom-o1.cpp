class RandomizedSet {
public:
    vector<int>ans;
    unordered_map<int,int>mp;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end())
        return false;
        ans.push_back(val);
        mp[val]=ans.size()-1;
        return true;
        
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end())
        return false;
        int idx=mp[val];
        int temp=ans.back();
        ans.back()=val;
        ans[idx]=temp;
        mp[temp]=idx;
        ans.pop_back();
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        int n=ans.size();
        return ans[rand()%n];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */