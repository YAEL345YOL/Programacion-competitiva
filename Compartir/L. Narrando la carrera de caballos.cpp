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
    
    ll n,dtrc1=0,dtrc2=0,frente=0,dm=0;
    cin>>n;

    fore(i,1,n+1){
        ll dr1,dr2;
        cin>>dr1>>dr2;
        dtrc1+=dr1;
        dtrc2+=dr2;
        if(dtrc1==dtrc2 && frente!=0){
            cout<<"Al minuto "<<i<<" los caballos van empatados"<<nl;
            frente=0;
        }
        else if(dtrc1>dtrc2 && frente!=1){
            cout<<"Al minuto "<<i<<" el caballo 1 toma la delantera"<<nl;
            frente=1;
        }
        else if(dtrc2>dtrc1 && frente!=2){
            cout<<"Al minuto "<<i<<" el caballo 2 toma la delantera"<<nl;
            frente=2;
        }
        dm<abs(dtrc1-dtrc2) ? dm=abs(dtrc1-dtrc2):dm=dm;
    }

    dtrc1!=dtrc2 ? cout<<"Termina la carrera y gana el caballo "<<(dtrc1>dtrc2 ? 1:2)<<nl:cout<<"Termina la carrera y empatan los caballos"<<nl;
    cout<<"La distancia maxima entre los caballos fue de "<<dm;

    return 0;
}
