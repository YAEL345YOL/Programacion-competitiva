vvll graph;

bool isBipartite(ll S){
    vll state(graph.size(),-1);
    queue<ll>visiting;
    state[S] = 0;
    visiting.push(S);
    while(!visiting.empty()){
        ll u = visiting.front();
        visiting.pop();
        for(auto&v:graph[u]){
            if(state[v]==state[u]) return 0;
            if(state[v]==-1){
                state[v] = 1 - state[u];
                visiting.push(v);
            }
        }
    }
    return 1;
}
