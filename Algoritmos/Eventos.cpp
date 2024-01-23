// ΨΔΣL345ΨΘL
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define f first
#define s second
#define pb push_back
#define ld long double
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
struct evento{
    ll id,tipo,pos;
};
vector<evento>eventos;
bool orden(const evento&a,const evento&b){
    if(a.pos!=b.pos) return a.pos<b.pos;
    return a.tipo<b.tipo;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,a,b;
    cin>>n>>a>>b;
    
    set<ll>entradasUnicas;
    
    fore(i,0,n){
        evento entrada,salida;
        cin>>entrada.pos>>salida.pos;
        
        entradasUnicas.insert(entrada.pos);
        
        entrada.tipo=0;
        salida.tipo=2;
        
        entrada.id = salida.id = i;
        
        eventos.pb(entrada);
        eventos.pb(salida);
    }
    
    for(auto&e:entradasUnicas){
        evento suma;
        suma.id=-1;
        suma.pos=e;
        suma.tipo=1;
        eventos.pb(suma);
    }
    
    sort(all(eventos),orden);
    
    for(auto&evento:eventos) cout<<evento.id<<' '<<evento.tipo<<' '<<evento.pos<<nl;
    
    
    return 0;   
}
