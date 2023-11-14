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
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll n;
    cin>>n;
    
    (n<21) ? ((n>=15) ? cout<<"fria!":cout<<"fria!"<<nl<<"RIP escamitas :(") : (n>=21 && n<=29) ? cout<<"tibia" : ((n<=34) ? cout<<"caliente!":cout<<"caliente!"<<nl<<"RIP escamitas :(");
  
    return 0;
}
