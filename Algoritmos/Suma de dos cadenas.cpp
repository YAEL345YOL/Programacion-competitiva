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
ll sumaDosCadenas(string&n1,string&n2){
    string resultado = "";
    ll i = n1.size()-1,j = n2.size()-1, carreo=0, carreos=0;
    while(i>=0 or j>=0 or carreo>0){
        ll suma = (i>=0 ? n1[i]-48:0) + (j>=0 ? n2[j]-48:0) + carreo;
        carreo = suma / 10;
        if(carreo!=0) ++carreos;
        resultado.insert(resultado.begin(),(char)(suma%10)+48);
        --i;
        --j;
    }
    return carreos;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n1,n2;
    cin>>n1>>n2;

    cout<<sumaDosCadenas(n1,n2);

    return 0;
}
