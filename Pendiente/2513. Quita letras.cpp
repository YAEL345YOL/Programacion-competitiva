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
bool libre(const char &letra,const string &letras){
    for(int y=0;y<letras.size();++y){
        if(letras[y]==letra) return 0;
    }
    return 1;
}
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    string texto,letras,nuevoTexto;
    getline(cin,texto);
    cin>>letras;
    for(int x=0;x<texto.size();++x){
        if(libre(texto[x],letras)) nuevoTexto+=texto[x];
    }
    cout<<nuevoTexto;
    return 0;
}
