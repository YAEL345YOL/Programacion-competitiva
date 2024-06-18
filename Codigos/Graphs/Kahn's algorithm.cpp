vvll graph;
vll state;

vll topologicalSort(){
    state.resize(graph.size(),0);
    queue<ll>visiting;
    vll res;

    for(auto&u:graph) 
        for(auto&v:u) 
            ++state[v];

    fore(i,0,state.size())
        if(state[i]==0) 
            visiting.push(i);

    while(!visiting.empty()){
        ll u = visiting.front();
        visiting.pop();
        res.pb(u);
        for(auto&v:graph[u])
            if(--state[v]==0)
                visiting.push(v);
    }
    
    if(res.size()!=graph.size()) res.clear();

    return res;
}
/*
    don't forget:
    1. The graph needs to be a DAG (directed acyclic graph) for get a valid answer, otherwise the fuction will return an empty vector.
*/
