vvll graph, dis;

void BFS(ll f){
    vb visited(graph.size(),0);
    queue<ll>visiting;
    visited[f] = 1;
    visiting.push(f);
    while(!visiting.empty()){
        ll u = visiting.front();
        visiting.pop();
        cout<<u<<nl;
        for(auto&v:graph[u]){
            if(!visited[v]){
                visited[v] = 1;
                dis[v] = dis[u] + 1;
                visiting.push(v);
            }
        }
    }
}
