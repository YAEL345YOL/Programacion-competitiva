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
int calculoPerlas(vector<int>&auxiliar,&numQueridoPerlas){
    int auxPerlas=0,perdidas=0;
    for(int x=0;x<auxiliar.size();++x){
        if(auxPerlas>=numQueridoPerlas) return perdidas;
        if(auxiliar[x]==0) ++perdidas;
        else ++auxPerlas;
    }
    return perdidas;
}
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    
    int numQueridoPerlas,numTotalDePerlas;
    cin>>numQueridoPerlas>>numTotalDePerlas;
    bool basePerlas[numTotalDePerlas];
    
    for(int x=0;x<numTotalDePerlas;++x) cin>>basePerlas[x];
    
    for(int x=0;x<numTotalDePerlas;++x){
        int auxPerlas=0;
        vector<bool>auxiliar;
        for(int y=x;y<numTotalDePerlas;++y) auxiliar.push_back(basePerlas[y]);
        for(int y=0;y<x;++y) auxiliar.push_back(basePerlas[y]);
        
        for(int x=0;x<auxiliar.size();++x){
            if(auxPerlas>numQueridoPerlas){
                
            }
            
        }
        
        for(int aux:auxiliar) cout<<aux<<' ';
        cout<<nl;
    }
    
    return 0;
}
