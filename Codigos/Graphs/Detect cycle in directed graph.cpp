vvll graph;

bool detectCycleComponent(ll u,vll&state){
    state[u] = 1;
    for(auto&v:graph[u])
        if(state[v]==1 || (state[v]==0 && detectCycleComponent(v,state))) 
            return 1; 
    state[u] = 2;
    return 0;
}

bool detectCycleDirectedGraph(){
    vll state(graph.size(),0);
    fore(i,0,graph.size())
        if(state[i]==0 && detectCycleComponent(i,state))
            return 1;
    return 0;
}
