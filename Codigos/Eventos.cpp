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
    
    fore(i,0,n){
        evento entrada,salida;
        cin>>entrada.pos>>salida.pos;
        
        entrada.tipo=0;
        salida.tipo=2;
        
        entrada.id = salida.id = i;
        
        eventos.pb(entrada);
        eventos.pb(salida);
    }
    
    fore(i,a,b+1){
        evento suma;
        suma.pos=i;
        suma.id=-1;
        suma.tipo=1;
        eventos.pb(suma);
    }
    
    sort(all(eventos),orden);
    
    unordered_set<ll>frutasActuales;
    
    for(auto&eve:eventos){
        if(eve.tipo==0) frutasActuales.insert(eve.id);
        
        if(eve.tipo==1) frutasActuales.erase(eve.id);
    }
    
    return 0;   
}
