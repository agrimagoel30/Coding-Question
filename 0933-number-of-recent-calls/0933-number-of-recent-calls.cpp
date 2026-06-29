class RecentCounter {
public:
vector<int>v;
    RecentCounter() {
    }
    
    int ping(int t) {
        v.push_back(t);
        int n=v.size();
        int c=0;
        for(int i=n-1;i>=0;i--){
            if(t-v[i]<=3000)
            c++;
            else
            break;
        }
        return c;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */