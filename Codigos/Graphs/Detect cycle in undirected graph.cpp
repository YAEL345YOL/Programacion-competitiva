vvll graph;

bool detectCycleComponent(ll u,ll parent,vll&visited){
    visited[u] = 1;
    for(auto&v:graph[u])
        if((visited[v] && v!=parent) || (!visited[v] && detectCycleComponent(v,u,visited))) 
            return 1;
    return 0;
}

bool detectCycleUndirectedGraph(){
    vll visited(graph.size(),0);
    fore(i,0,n)
        if(!visited[i] && detectCycleComponent(i,-1,visited));
            return 1;
    return 0;
}
