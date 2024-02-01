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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,q;
    cin>>n>>m;

    vector<vector<ll>>matriz(n+1,vector<ll>(m+1));

    fore(i,1,n+1){
        fore(j,1,m+1){
            cin>>matriz[i][j];
            matriz[i][j] = matriz[i][j] + matriz[i-1][j] + matriz[i][j-1] - matriz[i-1][j-1];
        }
    }

    cin>>q;

    fore(i,0,q){
        ll la,ra,lb,rb;
        cin>>la>>ra>>lb>>rb;
        cout<<matriz[lb][rb]+matriz[la-1][ra-1]-matriz[lb][ra-1]-matriz[la-1][rb]<<nl;
    }
        
    return 0;
}