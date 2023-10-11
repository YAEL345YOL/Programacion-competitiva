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
int dx[] = {-1,+1,0,0},dy[] = {0,0,-1,+1};
struct nodo{
    int fila,columna;
    void pos(int fila_,int columna_){
        fila=fila_;
        columna=columna_;
    }
};
bool valid(const int&fila,const int&columna,vector<vector<int>>&matriz){
    return fila>=0 and columna>=0 and fila<matriz.size() and columna<matriz[0].size() and matriz[fila][columna]==1;
}
void DFS(
        nodo&nodoActual,
        nodo&nodoFinal,
        vector<int>&caminoActual,
        vector<vector<int>>&caminos,
        vector<vector<int>>&matriz
    ){
        matriz[nodoActual.fila][nodoActual.columna] = 2;
        if(nodoActual.fila == nodoFinal.fila && nodoActual.columna == nodoFinal.columna){
            caminos.pb(caminoActual);
            return;
        }
        fore(i,0,4){
            if(valid(nodoActual.fila+dx[i],nodoActual.columna+dy[i],matriz)){
                nodo auxiliar;
                auxiliar.pos(nodoActual.fila+dx[i],nodoActual.columna+dy[i]);
                DFS(auxiliar,nodoFinal,caminoActual,caminos,matriz);
            }
        }
        matriz[nodoActual.fila][nodoActual.columna] = 1;
        caminoActual.pop_back();
    }
void initDFS(
        nodo&nodoInicial,
        nodo&nodoFinal,
        vector<vector<int>>&caminos,
        vector<vector<int>>&matriz
    ){
        vector<int>caminoActual;
        DFS(nodoInicial,nodoFinal,caminoActual,caminos,matriz);
    }
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    
    int n;
    cin>>n;
    
    vector<vector<int>>matriz(n,vector<int>(n));
    vector<vector<int>>caminos;
    fore(i,0,n){
        fore(j,0,n){
            cin>>matriz[i][j];
        }
    }
    
    nodo nodoInicial,nodoFinal;
    nodoInicial.pos(0,0);
    nodoFinal.pos(n-1,n-1);
    
    initDFS(nodoInicial,nodoFinal,caminos,matriz);
    
    for(vector<int>nm:caminos){
        for(int k:nm) cout<<k<<' ';
        cout<<nl;
    }
    
    return 0;
}
