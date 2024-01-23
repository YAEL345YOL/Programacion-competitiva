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
    ll id,pos;
    char tipo;
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
        evento entrada,suma,salida;
        cin>>entrada.pos>>salida.pos;
        
        entrada.tipo=0;
        suma.tipo=1;
        salida.tipo=2;
        
        entrada.id=i;
        suma.id=i;
        salida.id=i;
        
        eventos.pb(entrada);
        eventos.pb(suma);
        eventos.pb(salida);
    }
    
    sort(all(eventos),orden);
    
    for(auto&eve:eventos) cout<< eve.id << ' ' << eve.tipo << ' ' << eve.pos << nl;
  
    return 0;
}
