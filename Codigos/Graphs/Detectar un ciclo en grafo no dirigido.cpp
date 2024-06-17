vvll graph;
vll visited;

bool detectCycleComponent(ll u,ll parent){
    visited[u] = 1;
    for(auto&v:graph[u])
        if((visited[v] && v!=parent) || (!visited[v] && detectCycleComponent(v,u))) 
            return 1;
    return 0;
}

bool detectCycleUndirectedGraph(){
    fore(i,0,n)
        if(!visited[i] && detectCycleComponent(i,-1));
            return 1;
    return 0;
}
