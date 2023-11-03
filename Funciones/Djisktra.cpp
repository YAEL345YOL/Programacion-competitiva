// ΨΔΣL345ΨΘL
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define f first
#define s second
#define pb push_back
#define ll long long
#define ull unsigned long long
#define sp(x) fixed<<setprecision(x)
#define all(x) x.begin(),x.end()
#define fore(it,i,f) for(auto it=i;it<f;++it)
#define letter(x) x>=65 && x<=90 || x>=97 && x<=122 ? true:false
#define number(x) x>=48 && x<=57 ? true:false
/*'A' = 65 'Z' = 90
  'a' = 97 'z' = 122
  '0' = 48 '9' = 57 */
struct Edge {
    int to;
    int weight;
};
void dijkstra(vector<vector<Edge>>& graph, int source, vector<int>& dist){
    dist.assign(graph.size(), INT_MAX);
    dist[source] = 0;

    priority_queue<pair<int,int>,vector<pair<int, int>>,greater<pair<int,int>>>pq;
    pq.push({0, source});

    while(!pq.empty()) {
        int u = pq.top().second;
        int current_dist = pq.top().first;
        pq.pop();
        if(current_dist > dist[u]) continue;
        for(const Edge& edge:graph[u]) {
            int v = edge.to;
            int weight = edge.weight;
            if(dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    int V,E;
    cin>>V>>E;

    vector<vector<Edge>>graph(V);

    fore(i,0,E){
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }

    int source;
    cin>>source;

    vector<int> dist;
    dijkstra(graph,source,dist);

    fore(i,0,V) cout<<"Distancia mínima desde "<<source<<" a "<<i<<" es "<<dist[i]<<nl;

    return 0;
}
