vvll graph;
vll dist;

void BFS(ll S){
    queue<ll>visiting;
    dist[S] = 0;
    visiting.push(S);
    while(!visiting.empty()){
        ll u = visiting.front();
        visiting.pop();
        cout<<u<<nl;
        for(auto&v:graph[u]){
            if(dist[v]==-1){
                dist[v] = dist[u] + 1;
                visiting.push(v);
            }
        }
    }
}
