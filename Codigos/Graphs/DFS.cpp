vvll graph;
vb visited;

void DFS(ll u){
    visited[u] = 1;
    cout<<u<<nl;
    for(auto&v:graph[u])
        if(!visited[v])
            DFS(v);
        
}
/*
    don't forget:
    1. visited.resize(graph.size(),0);
*/
