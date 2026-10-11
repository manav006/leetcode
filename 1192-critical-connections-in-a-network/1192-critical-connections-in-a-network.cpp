class Solution {
public:
   int time=1;
    void calc(vector<vector<int>>& adj , vector<vector<int>>& bridges,int node, int parent,vector<int>& low , vector<int>&tin , vector<bool>&vis){
        vis[node]=true;
        low[node]=tin[node]= time;
        time++;
        for(int neigh : adj[node]){
            if(neigh == parent){
                continue;
            }
            if(!vis[neigh]){
                calc(adj,bridges,neigh,node,low,tin,vis);
                low[node]=min(low[node],low[neigh]);

                if(low[neigh]>tin[node]){
                    bridges.push_back({node,neigh});
                }
            }
            else{
                low[node]=min(low[node],low[neigh]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>>bridges;
        vector<vector<int>>adj(n);
        for(auto x:connections){
            int u = x[0];
            int v= x[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>low(n);
        vector<int>tin(n);
        vector<bool>vis(n,false);
        calc(adj,bridges ,0, -1 ,low , tin,vis);
        return bridges;
    }
};