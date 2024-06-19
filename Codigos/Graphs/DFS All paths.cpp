vvll graph;
vb visited;
vvll paths;
vll path;

void DFS(ll u){
    visited[u] = 1;
    path.pb(u);
    
    if(u==n-1) paths.pb(path);

    for(auto&v:graph[u])
        if(!visited[v])
            DFS(v);

    visited[u] = 0;
    path.pop_back();
}
/*
  don't forget:
  1. print paths:
  for(auto&c:paths){
        for(auto&e:c) cout<<e<<' ';
        cout<<nl;
    }
*/
