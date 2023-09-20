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
bool busquedaBinaria(vector<int>&vec,int&num){
    int ini=0,fin=vec.size()-1,medio;
    while(ini<=fin){
        medio = (ini+fin)/2;
        if(num==vec[medio]) return true;
        else if(num>vec[medio]) ini=medio+1;
        else if(num<vec[medio]) fin=medio-1;
    }
    return false;
}
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    
    vector<bool>resp;
    vector<int>num;
    
    int filasColumnas;
    cin>>filasColumnas;
    
    for(int x=0;x<filasColumnas*filasColumnas;++x){
        int aux;
        cin>>aux;
        num.push_back(aux);
    }
    
    sort(all(num));
    
    int numerosABuscar;
    cin>>numerosABuscar;
    
    for(int x=0;x<numerosABuscar;++x){
        int aux;
        cin>>aux;
        resp.push_back(busquedaBinaria(num,aux));
    }
    
    for(bool resul:resp) resul ? cout<<"SI"<<nl:cout<<"NO"<<nl;
    
    // segundo del dia padrino :VVV
    
    return 0;
}
