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
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    map<string, string>diccionario;
    int n;
    cin>>n;
    fore(i,0,n){
        string palabra,intercambio;
        cin>>palabra>>intercambio;
        diccionario[palabra] = intercambio;
    }
    // cin.ignore();
    string texto,auxiliar;
    getline(cin,texto);
    auxiliar = texto;
    for(map<string,string>::iterator ite = diccionario.begin();ite!=diccionario.end();++ite){
        while(find(all(auxiliar),ite->first)!=auxiliar.end()){
            texto.replace(find(all(texto),ite->first)-texto.begin(),ite->second.size(),ite->second);
            auxiliar.replace(find(all(auxiliar),ite->first)-auxiliar.begin(),ite->second.size()," ");
        }
        while(find(all(auxiliar),ite->second)!=auxiliar.end()){
            texto.replace(find(all(texto),ite->second)-texto.begin(),ite->first.size(),ite->first);
            auxiliar.replace(find(all(auxiliar),ite->second)-auxiliar.begin(),ite->first.size()," ");
        }
    }
    cout<<texto;
    return 0;
}
