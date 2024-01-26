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
#define lsb(x) (x & -x) 
#define sp(x) fixed<<setprecision(x)
#define all(x) x.begin(),x.end()
#define fore(it,i,f) for(auto it=i;it<f;++it)
#define letter(x) x>=65 && x<=90 || x>=97 && x<=122 ? true:false
#define number(x) x>=48 && x<=57 ? true:false
/*'A' = 65 'Z' = 90
  'a' = 97 'z' = 122
  '0' = 48 '9' = 57 */
struct Query{
    ull id,tipo,año;
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    unordered_map<ull,ull>naciminetos;
    vector<Query>Querys;

    ull n,m;
    cin>>n>>m;

    fore(i,0,n){
        Query entrada,salida;
        cin>>entrada.año>>salida.año;
        naciminetos[i] = entrada.año;
        entrada.id = salida.id = i;
        entrada.tipo=0;
        salida.tipo=2;
        Querys.pb(entrada);
        Querys.pb(salida);
    }

    fore(i,0,m){
        Query consulta;
        cin>>consulta.año;
        consulta.id=INT64_MAX;
        consulta.tipo=1;
        Querys.pb(consulta);
    }

    sort(all(Querys),[&](const Query&a,const Query&b){
        if(a.año!=b.año) return a.año<b.año;
        return a.tipo<b.tipo;
    });

    set<pair<ull,ull>>actual;

    for(auto&consulta:Querys){
        if(consulta.tipo==0) actual.insert({naciminetos[consulta.id],consulta.id});
        else if(consulta.tipo==1){
            if(!actual.empty()) cout<<actual.size()<<' '<<consulta.año-actual.rbegin()->first<<' '<<consulta.año-actual.begin()->first<<nl;
            else cout<<"0 0 0"<<nl;
            /*cout<<consulta.año<<": ";
            for(auto&par:actual) cout<<'{'<<par.first<<','<<par.second<<"} ";
            cout<<nl;*/
        }
        else if(consulta.tipo==2) actual.erase({naciminetos[consulta.id],consulta.id});
    }
    
    return 0;
}
