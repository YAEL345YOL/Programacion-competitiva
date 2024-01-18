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
#define sp(x) fixed<<setprecision(x)
#define all(x) x.begin(),x.end()
#define fore(it,i,f) for(auto it=i;it<f;++it)
#define letter(x) x>=65 && x<=90 || x>=97 && x<=122 ? true:false
#define number(x) x>=48 && x<=57 ? true:false
/*'A' = 65 'Z' = 90
  'a' = 97 'z' = 122
  '0' = 48 '9' = 57 */
void fx(vector<ll>&S,ll n){
    if(n>=2){
        if(S[S.size()-n+1]%2==0){
            sort(S.begin(),S.begin()+n-1);
            fx(S,n-1);
        }
        if(S[0]%2==0){
            reverse(S.begin()+S.size()-n+1,S.end());
            fx(S,n-1);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll>numeros(n);

    fore(i,0,n) cin>>numeros[i];

    fx(numeros,numeros.size());

    for(auto&numero:numeros) cout<<numero<<' ';
     
    return 0;
}
