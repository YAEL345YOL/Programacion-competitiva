const ll INF = 1e18+7;
vvpar graph;
vll dist;

void Djikstra(ll S){
    dist.resize(graph.size(),INF);
    priority_queue<par,vpar,greater<par>>pq;
    dist[S] = 0;
    pq.push({0,S});
    while(!pq.empty()){
        auto [w1,u] = pq.top();
        pq.pop();
        if(w1>dist[u]) continue;
        for(auto&[w2,v]:graph[u]){
            if(dist[u]+w2<dist[v]){
                dist[v] = dist[u] + w2;
                pq.push({dist[v],v});
            }
        }
    }
}
/*
    don't forget:
    graph[u].push_back({w,v});
    graph[v].push_back({w,u});
*/
