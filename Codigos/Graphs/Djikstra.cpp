const ll INF = 10e9+7;
vector<vector<par>>graph;
vll dist;

void Djikstra(ll f){   
    priority_queue<par,vector<par>,greater<par>>pq;
    dist[f] = 0;
    pq.push({0,f});
    while(!pq.empty()){
        auto [u,d] = pq.top();
        pq.pop();
        if(d==dist[u]){
            for(auto&[v,w]:graph[u]){
                if(dist[u]+w<dist[v]){
                    dist[v] = dist[u] + w;
                    pq.push({dist[v],v});
                }
            }
        }
    }
}