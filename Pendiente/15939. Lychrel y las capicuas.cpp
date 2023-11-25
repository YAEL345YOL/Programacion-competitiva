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
ll ite=0;
bool numeroPalindromo(ll&n){
    string num = to_string(n);
    fore(i,0,num.size()) if(num[i]!=num[num.size()-1-i]) return 0;
    return 1;
}
ll revez(ll&n){
    string num = to_string(n);
    reverse(all(num));
    return stoll(num);
}
void f(ll n){
    ++ite;
    if(ite>10){
        cout<<"Numero de Lychrel";
        return;
    }
    else if(numeroPalindromo(n)){
        cout<<n;
        return;
    }
    else f(n+revez(n));
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;

    f(n);

    return 0;
}
