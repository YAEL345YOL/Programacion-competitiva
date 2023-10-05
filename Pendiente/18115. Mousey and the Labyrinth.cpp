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
// 18009. SOULS / 100P / no-completado
struct nodo{
    int fila;
    int columna;
    void constructor(int fila_,int columna_){
        fila=fila_;
        columna=columna_;
    }
}
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    
    int n;
    cin>>n;
    vector<vector<int>>matriz(n,vector<int>(n));
    
    nodo nodoInicio,nodoFinal;
    nodoInicio.constructor(0,0);
    nodoFinal.constructor(n-1,n-1);
    
    fore(i,0,n){
        fore(j,0,n){
            cin>>matriz[i][j];
        }
    }
    
    
    return 0;
}
