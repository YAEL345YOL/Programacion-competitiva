// YAEL345YOL
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
#define ull unsigned long long
#define sp(x) fixed<<setprecision(x)
#define all(x) x.begin(),x.end()
#define letter(x) x>=65 && x<=90 || x>=97 && x<=122 ? true:false
#define number(x) x>=48 && x<=57 ? true:false
int posSeparador(string &texto){
    for(int x=0;x<texto.size();++x){
        if(texto[x]==',') return x;
    }
    return -1;
}
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0); 
    vector<float>resultados;
    map<int,float>precios;
    precios[12]=2;
    precios[15]=2.2;
    precios[18]=4.5;
    precios[19]=3.5;
    precios[23]=6;
    precios[25]=6;
    precios[29]=5;
    string entrada;
    while(cin>>entrada) resultados.push_back(precios[stoi(entrada.substr(0,posSeparador(entrada)))]*stof(entrada.substr(posSeparador(entrada)+1)));
    for(float aux:resultados) cout<<aux<<nl;
    return 0;
}
