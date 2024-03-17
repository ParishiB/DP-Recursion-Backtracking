vector<int>bfs(int V , vector<int>adj[]){
	vector<int>vis(V,0);
	vis[0] = 1;
	queue<int>q;
	q.push(0);
	vetor<int>ans;

	while(!q.empty()){
		int temp = q.front();
		q.pop();
		v.push_back(temp);

		for(auto it : adj[temp]){
			if(vis[it] == 0){
				vis[it] = 1;
				q.push(it);
			}
		}
	}

	return v;
}
