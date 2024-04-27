// ΨΔΣL345ΨΘL
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define f first
#define s second
#define pb push_back
#define pf push_front
#define lsb(x) (x & -x) 
#define sp(x) fixed<<setprecision(x)
#define all(x) x.begin(),x.end()
#define fore(it,i,f) for(auto it=i;it<f;++it)
#define letter(x) x>=65 && x<=90 || x>=97 && x<=122 ? true:false
#define number(x) x>=48 && x<=57 ? true:false
#define fastIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>par;
typedef vector<ll>vll;
typedef vector<vector<ll>>vvll;
typedef vector<bool>vb;

/*'A' = 65 'Z' = 90
  'a' = 97 'z' = 122
  '0' = 48 '9' = 57 */

ll n,q;
vll vc;
vll segtree;

void build(ll v,ll l,ll r){
    if(l==r){
        segtree[v] = vc[l];
        return;
    }
    ll m = (l+r)/2;
    build(2*v,l,m);
    build(2*v+1,m+1,r);
    segtree[v] = max(segtree[2*v],segtree[2*v+1]);
}

ll query(ll v,ll l,ll r,ll i,ll j){
    if(r<i or j<l) return INT64_MIN;
    else if(l>=i && r<=j) return segtree[v];
    return max(query(2*v,l,(l+r)/2,i,j),query(2*v+1,((l+r)/2)+1,r,i,j));
}

int main(){
    fastIO;

    cin>>n;

    vc.resize(n);
    segtree.resize(4*n);

    fore(i,0,n) cin>>vc[i];

    build(1,0,n-1);

    cin>>q;

    while(q--){
        ll a,b;
        cin>>a>>b;
        cout<<query(1,0,n-1,a,b)<<nl;
    }
  
    return 0;
}