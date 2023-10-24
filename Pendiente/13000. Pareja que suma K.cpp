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
vector<pair<int,int>> twoPointers(const vector<int>&numeros,const int&numero){
    vector<pair<int,int>>res;
    int derecha=0,izquierda=numeros.size()-1;
    while(izquierda<derecha){
        if(numeros[derecha]+numeros[izquierda]==numero){
            res.pb({min(numeros[derecha],numeros[izquierda]),max(numeros[derecha],numeros[izquierda])});
        }
        else if(numero<numeros[derecha]+numeros[izquierda]) ++izquierda;
        else --derecha;
    }
    return res;
}
bool orden(const pair<int,int>&a,const pair<int,int>&b){
    return a.first<b.first;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin>>n;
    vector<int>numeros(n);
    
    sort(all(numeros));
    
    fore(i,0,n) cin>>numeros[i];
    
    cin>>m;
  
    auto res = twoPointers(numeros,m);  
    if(!res.empty()){
        sort(all(res),orden);
        cout<<res[0].first<<' '<<res[0].second;
    }
    else cout<<0<<' '<<0;
  
    return 0;
}
