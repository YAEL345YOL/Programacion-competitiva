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
    ll distancia = INT_MAX, num;
    nodo* padre = nullptr;
    bool operator<(const nodo&otroNodo) const{
        return num<otroNodo.num;
    }
};
vector<set<pair<nodo*,ll>>>matriz(4);
void addConection(nodo*n1,nodo*n2, const ll&peso){
    matriz[n1->num].insert({n2,peso});
    matriz[n2->num].insert({n1,peso});
}
void Djikstra(nodo*nodoInicial){
    priority_queue<nodo*,vector<nodo*>,greater<nodo*>>pq;
    nodoInicial.distancia = 0;
    pq.push(nodoInicial);
    while(!pq.empty()){
        nodo* act = pq.top();
        pq.pop();
        for(auto&vecino:matriz[act.num]){
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll n;
    cin>>n;
    
    fore(i,0,n){
        ll peso;
        nodo *n1,*n2;
        n1 = new nodo;
        n2 = new nodo;
        cin>>n1->num>>n2->num>>peso;
        addConection(n1,n2,peso);
    }
    
    return 0;
}
