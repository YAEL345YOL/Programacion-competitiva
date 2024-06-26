// ΨΔΣL345ΨΘL
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
typedef pair<ll,ll>par;
typedef vector<ll>vll;
typedef vector<par>vpar;
typedef vector<bool>vb;
typedef vector<vll>vvll;
typedef vector<vpar>vvpar;
typedef vector<vb>vvb;

/*'A' = 65 'Z' = 90
  'a' = 97 'z' = 122
  '0' = 48 '9' = 57 */

ll BFS(vll&arr){

    ll maximo = *max_element(all(arr));
    ll minimo = *min_element(all(arr));

    map<par,ll>d;
    queue<par>visiting;
    queue<par>find;

    visiting.push({0,arr.size()-1});
    find.push({0,0});
    d[{0,arr.size()-1}] = 0;

    while(!visiting.empty()){
        par u = visiting.front();
        par f = find.front();
        visiting.pop();
        find.pop();

        if(f.first && f.second) return d[u];

        if(u.first>u.second) continue;

        visiting.push({u.first+1,u.second});
        visiting.push({u.first,u.second-1});
        
        find.push({f.first || arr[u.first]==maximo ,f.second ||  arr[u.first]==minimo});
        find.push({f.first || arr[u.second]==maximo,f.second || arr[u.second]==minimo});

        d[{u.first+1,u.second}] = d[u] + 1;
        d[{u.first,u.second-1}] = d[u] + 1;
    }

    return -1;
}

int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);

    ll n;
    cin>>n;

    while(n--){
        ll m;
        cin>>m;
        vll arr(m);
        fore(i,0,m) cin>>arr[i];
        cout<<BFS(arr)<<nl;
    }

    return 0;
}
