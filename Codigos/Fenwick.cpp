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
vector<ll>arreglo;
vector<ll>fenwick;
ll n;
void update(int index,int delta){
    for(index;index<=n;index+=lsb(index)) fenwick[index]+=delta;
}
ll query(ll index){
    ll suma=0;
    for(index;index>0;index-=lsb(index)) suma+=fenwick[index];
    return suma;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    
    fenwick.resize(n+1);
    arreglo.resize(n+1);
    
    fore(i,1,n+1){
        cin>>arreglo[i];
        update(i,arreglo[i]);
    }
    
    ll q;
    cin>>q;
    
    fore(i,0,q){
        ll l,r;
        cin>>l>>r;
        cout<<query(r) - query(l-1)<<nl;
    }
    
  
    return 0;
}
