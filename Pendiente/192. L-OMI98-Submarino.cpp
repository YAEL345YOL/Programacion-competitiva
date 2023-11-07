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
struct nodo{
    ll number,steps=0;
    bool visited=false;
    bool operator<(const nodo&n2) const {
        return number<n2.number;
    }
};
ll BFS(vector<vector<nodo>>graph,nodo nodoInicial,nodo nodoFinal){
    queue<nodo>visiting;
    nodoInicial.visited=true;
    visiting.push(nodoInicial);
    while(!visiting.empty()){
        nodo current = visiting.front();
        visiting.pop();
        if(current.number==nodoFinal.number) return current.steps;
        for(auto&vecino:graph[current.number]){
            if(!vecino.visited){
                vecino.steps=current.steps+1;
                vecino.visited=true;
                visiting.push(vecino);
            }
        }
    }
    return -1;
}
void addConection(vector<vector<nodo>>&graph,nodo&n1,nodo&n2){
    graph[n1.number].pb(n2);
    graph[n2.number].pb(n1);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll numberOfNodes,numberOfConextions,minTime,trip=0;
    cin>>numberOfNodes>>numberOfConextions>>minTime;
    vector<vector<nodo>>graph(numberOfNodes+1);
    set<nodo>nodos;
    nodo nodoFinal;
    nodoFinal.number=numberOfNodes;
    
    fore(i,0,numberOfConextions){
        nodo auxiliary1,auxiliary2;
        cin>>auxiliary1.number>>auxiliary2.number;
        nodos.insert(auxiliary1);
        nodos.insert(auxiliary2);
        addConection(graph,auxiliary1,auxiliary2);
    }
    
    for(nodo n:nodos) if(BFS(graph,n,nodoFinal)<minTime && n.number!=numberOfNodes) ++trip;
    
    cout<<trip;
    
    return 0;
}
