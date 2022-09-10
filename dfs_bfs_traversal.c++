  // dfs
  
  void dfs(vector<int> &ans, vector<int> &visited, vector<int> adj[], int node){
        ans.push_back(node);
        visited[node] = 1;
        for(auto i : adj[node]){
            if(!visited[i]){
                dfs(ans, visited, adj, i);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<int> visited(V, 0);
        
        dfs(ans, visited, adj, 0);
        
        return ans;
    }





// bfs 

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        unordered_map<int,bool> v;
        vector<int> bfs;
        queue<int> q;
        q.push(0);
        v[0]=true;
        while(!q.empty())
        {
            int f=q.front();
            q.pop();
            bfs.push_back(f);
            for(int i:adj[f])
            {
                if(!v[i])
                {
                    q.push(i);
                    v[i]=true;
                }
            }
        }return bfs;
    } 