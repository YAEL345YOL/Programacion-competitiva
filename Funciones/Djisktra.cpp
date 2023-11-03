#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

vector<int> Dijkstra(vector<vector<pair<int, int>>>& graph, int start) {
    vector<int> distance(graph.size(),INT_MAX);
    vector<bool> visited(graph.size(),false);

    distance[start] = 0;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0, start});

    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        if (visited[u]) continue;
        visited[u] = true;
        for(const pair<int, int>& edge:graph[u]) {
            int v = edge.first;
            int w = edge.second;
            if(distance[u] + w < distance[v]) {
                distance[v] = distance[u] + w;
                pq.push({distance[v], v});
            }
        }
    }
    return distance;
}

int main() {
    int n = 6;
    vector<vector<pair<int, int>>> graph(n);

    graph[0].push_back({1, 2});
    graph[0].push_back({2, 4});
    graph[1].push_back({2, 1});
    graph[1].push_back({3, 7});
    graph[2].push_back({3, 3});
    graph[2].push_back({4, 5});
    graph[3].push_back({4, 2});
    graph[4].push_back({5, 1});

    int start = 0;
    vector<int> shortestDistances = Dijkstra(graph, start);

    int destination = 5;
    int shortestDistance = shortestDistances[destination];

    if (shortestDistance == INT_MAX) cout << "No se encontró un camino desde " << start << " a " << destination << endl;
    else cout << "La menor cantidad de nodos a recorrer desde " << start << " a " << destination << " es " << shortestDistance << endl;

    return 0;
}
