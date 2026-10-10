class Solution {
public:
    void bfs(vector<vector<int>>& isConnected , vector<bool>& vis , int node){
        vis[node]=true;
        for(int i=0;i<isConnected[node].size();i++){
            if(isConnected[node][i] ==1 && !vis[i]){
                bfs(isConnected , vis,i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool>vis(isConnected.size(),false);
        int ans=0;
        for(int i=0;i<isConnected.size();i++){
            if(!vis[i]){
                ans++;
                bfs(isConnected,vis,i);
            }
        }

        return ans;
    }
};