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
    int numeroGuardias,numeroDeGritos;
    ll aux;
    cin>>numeroGuardias;
    ll guardias[numeroGuardias];
    for(int x=0;x<numeroGuardias;x++){
        cin>>guardias[x];
    }
    cin>>numeroDeGritos;
    ll guardiasParados[numeroDeGritos]={0};
    for(int x=0;x<numeroDeGritos;x++){
        cin>>aux;
        for(int y=0;y<numeroGuardias;y++){
            if(guardias[y]+aux==y+1){
                guardiasParados[x]++;
            }
        }
    }
    for(int x:guardiasParados){
        cout<<x<<' ';
    }
    return 0;
}
