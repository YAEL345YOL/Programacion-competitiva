vvll graph;

void DFS(ll u,ll f,vll&path,vb&visited,vvll&paths){
    visited[u] = 1;
    path.pb(u);
    if(u==f) paths.pb(path);
    for(auto&v:graph[u])
        if(!visited[v])
            DFS(v,f,path,visited,paths);
    visited[u] = 0;
    path.pop_back();
}

vvll getAllPaths(ll u,ll v){
    vvll paths;
    vb visited(graph.size(),0);
    vll path;
    DFS(u,v,path,visited,paths);
    return paths;
}
