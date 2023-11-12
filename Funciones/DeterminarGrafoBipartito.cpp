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
vector<vector<int>>graph;
bool bipartite(const int&initialNode){
    vector<int>colors(graph.size(),-1);
    queue<int>visiting;
    colors[initialNode] = 0;
    visiting.push(initialNode);
    while(!visiting.empty()){
        int actual = visiting.front();
        visiting.pop();
        for(auto&neighbor:graph[actual]){
            if(colors[neighbor]==-1){
                colors[neighbor]=1-colors[actual];
                visiting.push(neighbor);
            }
            else if(colors[neighbor]==colors[actual]) return 0;
        }
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int numberOfNodes,numberOfConnections;
    cin>>numberOfNodes>>numberOfConnections;
    graph.resize(numberOfNodes);

    fore(i,0,numberOfConnections){
        int node1,node2;
        cin>>node1>>node2;
        graph[node1].pb(node2);
        graph[node2].pb(node1);
    }

    cout<<bipartite(0);
    
    return 0;
}
