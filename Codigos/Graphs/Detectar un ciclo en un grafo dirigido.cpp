vvll graph;
vll state;

bool detectCycleComponent(ll u){
    state[u] = 1;
    for(auto&v:graph[u])
        if(state[v]==1 || (state[v]==0 && detectCycleComponent(v))) 
            return 1; 
    state[u] = 2;
    return 0;
}

bool detectCycleDirectedGraph(){
    fore(i,0,graph.size())
        if(state[i]==0 && detectCycleComponent(i))
            return 1;
    return 0;
}
