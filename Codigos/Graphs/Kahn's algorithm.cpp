vvll graph;
vll state;

vll topologicalSort(){
    for(auto&ady:graph) 
        for(auto&u:ady) 
            ++state[u];

    queue<ll>visiting;

    fore(i,0,state.size())
        if(state[i]==0) 
            visiting.push(i);

    vll res;

    while(!visiting.empty()){
        ll u = visiting.front();
        visiting.pop();
        res.pb(u);
        for(auto&v:graph[u]){
            state[v]-=1;
            if(state[v]==0)
                visiting.push(v);
            
        }
    }
    
    if(res.size()!=state.size()) res.clear();

    return res;
}
