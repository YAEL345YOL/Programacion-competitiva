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
    bool visitado=false;
    ll distancia=INT_MAX;
    char tipo;
};
int dx[] = {-1,+1,0,0},dy[] = {0,0,-1,+1};
vector<vector<nodo>>matriz;
void djs(nodo&nodoInicial){
    nodoInicial.distancia=0;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll n;
    cin>>n;
    
    matriz.resize(n,vector<nodo>(n));
    nodo *nodoInicial,*nodoFinal;
    
    fore(i,0,n){
        fore(j,0,n){
            nodo aux;
            cin>>aux.tipo;
            if(aux.tipo=='S') nodoInicial = &aux;
            else if(aux.tipo=='E') nodoFinal = &aux;
            matriz[i][j] = aux;
        }
    }
    
    djs(*nodoInicial);
  
    return 0;
}
