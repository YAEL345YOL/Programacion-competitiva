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
void dfs
    (
    const int&nodoInicial,
    const int&nodoFinal,
    vector<bool>&visitado,
    vector<int>&caminoActual,
    vector<vector<int>>&caminos,
    vector<vector<int>>&grafo
    ){
    visitado[nodoInicial] = 1;
    caminoActual.pb(nodoInicial);
    if(nodoInicial == nodoFinal){
        caminos.pb(caminoActual);
        return;
    }
    for(int vecino:grafo[nodoInicial]){
        if(!visitado[vecino]){
            dfs(vecino,nodoFinal,visitado,caminoActual,caminos,grafo);
        }
    }
    visitado[nodoInicial] = 0;
    caminoActual.pop_back();
}
void iniciarDfs
    (
    const int&nodoInicial,
    const int&nodoFinal,
    vector<vector<int>>&caminos,
    vector<vector<int>>&grafo
    ){
    vector<bool>visitado(grafo.size(),0);
    vector<int>caminoActual;
    dfs(nodoInicial,nodoFinal,visitado,caminoActual,caminos,grafo);
}
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    vector<vector<int>>caminos;
    vector<vector<int>>grafo = {
        {1},
        {0,2,3},
        {1,3},
        {1,2,4},
        {3}
    };
    iniciarDfs(0,4,caminos,grafo);
    for(vector<int>aux:caminos){
        for(int num:aux) cout<<num<<' ';
        cout<<nl;
    }
    return 0;
}
