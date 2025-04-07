#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
#define lsb(x) (x & -x) 
#define sp(x) fixed<<setprecision(x)
#define all(x) x.begin(),x.end()
#define fore(it,i,f) for(auto it=i;it<f;++it)

typedef long long ll;
typedef unsigned long long ull;

int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    
    // minima cantidad de numeros entre s(n) para que sea par

    ll t; // t <= 1000 casos de prueba
    cin>>t;
    
    while(t--){
        ll n, s = 0;
        cin>>n; // n <= 10e10
        
        for(ll i=1;i*i<=n;++i){
            if(n%i == 0){
                s += n/i + n/(n/i);
            }
        }
        
        
    }

    return 0;
}
