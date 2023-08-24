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
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    deque<ull>puntajes;
    vector<string>acciones;
    ull numeroAcciones;
    cin>>numeroAcciones;
    for(ull x=0;x<numeroAcciones;++x){
        char accion;
        cin>>accion;
        if(accion=='R'){
            ull puntaje;
            cin>>puntaje;
            puntajes.push_back(puntaje);
        }
        else if(accion=='S'){
            string numbersConcat;
            if(puntajes.size()<3){
                acciones.push_back("NO HAY SUFICIENTES PUNTAJES");
                continue;
            }
            sort(all(puntajes));
            for(ull y=0;y<3;++y){
                numbersConcat+=to_string(puntajes[y]);
                if(y!=2) numbersConcat+=' ';
            }
            acciones.push_back(numbersConcat);
        }
        else if(accion=='B'){
            if(puntajes.empty()) continue;
            sort(all(puntajes));
            puntajes.pop_front();
        }
    }
    for(string aux:acciones) cout<<aux<<nl;
    if(puntajes.empty()){
        cout<<"NO HUBO GANADOR";
        return 0;
    }
    sort(all(puntajes));
    cout<<"EL PUNTAJE MAS ALTO FUE "<<puntajes[puntajes.size()-1];
    return 0;
}
