vvll graph;
vll parent;

bool detectCycleUndirectedGraph(ll S){
    queue<ll>visiting;
    parent[S] = S;
    visiting.push(S);
    while(!visiting.empty()){
        ll u = visiting.front();
        visiting.pop();
        for(auto&v:graph[u]){
            if(parent[v]!=-1 && v!=parent[u]) return 1;
            if(parent[v]==-1){
                parent[v] = u;
                visiting.push(v);
            }
        }
    }
    return 0;
}
