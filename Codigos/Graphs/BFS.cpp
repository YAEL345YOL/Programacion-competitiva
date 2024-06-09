vvll graph;

void BFS(ll f){
    vb visited(graph.size(),0);
    queue<ll>visiting;
    visited[f] = 1;
    visiting.push(f);
    while(!visiting.empty()){
        ll u = visiting.front();
        visiting.pop();
        for(auto&v:graph[u]){
            if(!visited[v]){
                visited[v] = 1;
                visiting.push(v);
            }
        }
    }
}
