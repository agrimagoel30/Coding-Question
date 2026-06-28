class Solution {
    private:
    void dfs(int node,vector<vector<int> >&adjlt,vector<int>&vis){
        vis[node]=1;
        for(auto it: adjlt[node]){
            if(!vis[it]){
                dfs(it,adjlt,vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
       // int V=isConnected(0).size();
       int V = isConnected.size();
       // vector<int> adjlt[V];
       vector<vector<int>> adjlt(V);
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjlt[i].push_back(j);
                    adjlt[j].push_back(i);
                }

            }
        }
       // int vis[V]={0};
       vector<int> vis(V, 0);  // ✅ correct
        int cnt=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,adjlt,vis);
            }
        }
        return cnt;
    }
};