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

ll n,m,a,b;
vvll matriz;
vvll dist;
vll s = {8,4,2,1}, dx = {1,0,-1,0}, dy = {0,1,0,-1};

bool valid(par u){
    return u.first>=0 && u.second>=0 && u.first<n && u.second<m;
}

ll BFS(par S){
    queue<par>visiting;
    dist[S.first][S.second] = 0;
    visiting.push(S);
    while(!visiting.empty()){
        auto [i,j] = visiting.front();
        visiting.pop();
        fore(p,0,4){
            par v = {i+dx[p],j+dy[p]};
            if(matriz[i][j]-s[p]>=0){
                matriz[i][j]-=s[p];
                continue;
            }
            if(!valid(v)) return dist[i][j];
            if(dist[v.first][v.second]==-1){
                dist[v.first][v.second] = dist[i][j] + 1;
                visiting.push({v});
            }
        }
    }
    return -1;
}

int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);

    cin>>n>>m>>a>>b;
    
    matriz.resize(n,vll(m));
    dist.resize(n,vll(m,-1));
    
    fore(i,0,n) fore(j,0,m) cin>>matriz[i][j];
    
    cout<<BFS({a-1,b-1});

    return 0;
}
