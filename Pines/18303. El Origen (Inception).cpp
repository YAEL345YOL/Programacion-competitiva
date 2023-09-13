// ΨΔΣL345ΨΘL
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define ull unsigned long long
#define sp(x) fixed<<setprecision(x)
#define all(x) x.begin(),x.end()
#define letter(x) x>=65 && x<=90 || x>=97 && x<=122 ? true:false
#define number(x) x>=48 && x<=57 ? true:false
// 'A' = 65 'Z' = 90
// 'a' = 97 'z' = 122
// '0' = 48 '9' = 57
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    vector<string>eventos;
    stack<string>pila;
    int numeroDeEntradas;
    cin>>numeroDeEntradas;
    for(int x=0;x<numeroDeEntradas;++x){
        string aux1;
        cin>>aux1;
        if(aux1=="Durmiente"){
            string aux2;
            cin>>aux2;
            pila.push(aux2);
        }
        else if(aux1=="Shock"){
            if(!pila.empty()) pila.pop();
        }
        else if(aux1=="Escaneo"){
            if(!pila.empty()) eventos.push_back(pila.top());
            else eventos.push_back("REALIDAD");
        }
    }
    for(string evento:eventos) cout<<evento<<nl;
    return 0;
}
