// ΨΔΣL345ΨΘL
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")
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
#define inputF() freopen("input.txt","r",stdin);
#define outputF() freopen("output.txt","w",stdout);
/*'A' = 65 'Z' = 90
  'a' = 97 'z' = 122
  '0' = 48 '9' = 57 */
ull MAX;
vector<ll>vc;
void prefixSum(){
    fore(i,3,MAX+1){
        vc[i]=vc[i-1]+(vc[i-1] - i>0 ? vc[i-2]:0)+(vc[i-2] - i>0 ? vc[i-3]:0)+(vc[i-3] - i>0 ? vc[i-4]:0);
        cout<<"vc["<<i<<"] = "<<vc[i-1]<<' '<<(vc[i-1] - i>0 ? vc[i-2]:0)<<' '<<(vc[i-2] - i>0 ? vc[i-3]:0)<<' '<<(vc[i-3] - i>0 ? vc[i-4]:0)<<nl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll m;
    cin>>MAX;
    vc.resize(MAX+1);
    
    fore(i,0,3){
        cin>>vc[i];
        vc[i] += (i>0 ? vc[i-1]:0);
    }
    
    prefixSum();
    
    for(auto&a:vc) cout<<a<<' ';
    
  
    return 0;
}
