class Solution {
public:
    bool dfs(int node, int color, vector<int>& colored, vector<vector<int>>& adjList) {
        colored[node] = color;
        for (auto it : adjList[node]) {
            if (colored[it] == -1) {
                if (!dfs(it, !color, colored, adjList)) {
                    return false;
                }
            } else if (colored[it] == color) {
                return false;
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> adjList(n);
        vector<int> colored(n, -1);
        
  
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < graph[i].size(); ++j) {
                adjList[i].push_back(graph[i][j]);
            }
        }

       
        for (int i = 0; i < n; ++i) {
            if (colored[i] == -1) {
                if (!dfs(i, 0, colored, adjList)) {
                    return false;
                }
            }
        }

        return true;
    }
};
