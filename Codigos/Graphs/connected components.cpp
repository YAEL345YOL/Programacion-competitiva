vvll graph;

vll BFS(ll S,vb&visited){
    vll component;
    queue<ll>visiting;
    visited[S] = 1;
    visiting.push(S);
    component.pb(S);
    while(!visiting.empty()){
        ll u = visiting.front();
        visiting.pop();
        for(auto&v:graph[u]){
            if(!visited[v]){
                visited[v] = 1;
                visiting.push(v);
                component.pb(v);
            }
        }
    }
    return component;
}

vvll getComponents(){
    vvll components;
    vb visited(graph.size(),0);
    fore(i,0,graph.size())
        if(!visited[i])
            components.pb(BFS(i,visited));
    return components;
}
