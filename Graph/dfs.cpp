void solve(int it , int V, vector<int>adl[], vector<int>vis , vector<int>ans){

	vis[it] = 1;
	ans.push_back(it);

	for(auto i: vis[it]){
		if(vis[i] == 0){
           solve(i,V,adj,vis,ans);
		}
      
	}
}


vector<int>bfs(int V , vector<int>adj[]){
	vector<int>vis(V,0);
	vector<int>ans;
	solve(0,V,adj,vis,ans);
	return ans;
}
