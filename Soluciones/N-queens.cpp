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

ll n=13,combinaciones=0;
vll columnas(n,-1);

bool valid(ll fila,ll columna){
    fore(i,0,columna) if(columnas[i]==fila or abs(columnas[i]-fila)==abs(i-columna)) return 0;
    return 1;
}

void backtracking(ll columna,ll reinas){
    if(reinas==n){
        ++combinaciones;
        return;
    }
    if(columna==n) return;
    fore(i,0,n){
        if(valid(i,columna)){
            columnas[columna] = i;
            backtracking(columna+1,reinas+1);
            columnas[columna] = -1;
        }
    }
}

int main(){
    fastIO;

    backtracking(0,0);

    cout<<combinaciones;
  
    return 0;
}
