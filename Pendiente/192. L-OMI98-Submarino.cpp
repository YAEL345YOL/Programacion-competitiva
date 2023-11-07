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
vector<set<ll>>grafo;
ll BFS(const ll&nodoInicial,const ll&nodoFinal){
    vector<set<ll>>copiaGrafo = grafo;
    
    queue<ll>visitando;
    vector<bool>visitado(copiaGrafo.size(),false);
    vector<ll>distancias(copiaGrafo.size(),0);
    
    visitado[nodoInicial] = true; 
    visitando.push(nodoInicial);
    
    while(!visitando.empty()){
        ll actual = visitando.front();
        visitando.pop();
        
        if(actual==nodoFinal) return distancias[actual];
        
        for(auto&vecino:copiaGrafo[actual]){
            if(!visitado[vecino]){
                distancias[vecino]=distancias[actual]+1;
                visitado[vecino]=true;
                visitando.push(vecino);
            }
        }
    }
    
    return -1;
}
void agregarConeccion(const ll&nodo1,const ll&nodo2){
    grafo[nodo1].insert(nodo2);
    grafo[nodo2].insert(nodo1);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll n,e,t,cont=0;
    cin>>n>>e>>t;
    
    grafo.resize(n+1);
    
    fore(i,0,e){
        ll n1,n2;
        cin>>n1>>n2;
        agregarConeccion(n1,n2);
    }
    
    /*for(auto&a:grafo){
        for(auto&b:a) cout<<b<<' '; 
        cout<<nl;
    }*/
    
    fore(i,1,n) if(BFS(i,n)<t && (!grafo[i].empty())) ++cont;
    
    cout<<cont;
  
    return 0;
}
