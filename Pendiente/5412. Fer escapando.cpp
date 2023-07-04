#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define cnl cout<<"\n"
#define ll long long
#define ull unsigned long long
#define sp(x) fixed<<setprecision(x)
#define all(x) x.begin(),x.end()
#define letter(x) x>=65 && x<=90 || x>=97 && x<=122 ? true:false
#define number(x) x>=48 && x<=57 ? true:false
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int segundos,DistanciaBot,DistanciaFelipe,aux,n=0;
    cin>>segundos>>DistanciaBot>>DistanciaFelipe;
    int DistanciaBotSegundos[segundos+1]={0},DistanciaFelipeSegundos[segundos+1]={0};
    DistanciaBotSegundos[0] = DistanciaBot,DistanciaFelipeSegundos[0] = DistanciaFelipe;
    for(int x=1;x<=segundos;x++){
        cin>>DistanciaBotSegundos[x];
        DistanciaBotSegundos[x] += DistanciaBotSegundos[x-1];
    }
    return 0;
}
