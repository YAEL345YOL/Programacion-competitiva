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
bool busquedaBinaria(const string &text,const char &caracter){
    int ini=0,fin=text.size()-1,medio;
    while(ini<=fin){
        medio = (ini+fin)/2;
        if(caracter==text[medio]) return true;
        else if(caracter>text[medio]) ini=medio+1;
        else if(caracter<text[medio]) fin=medio-1;
    }
    return false;
}
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    vector<bool>vec;
    int n,i,t;
    char c;
    string text,aux;
    cin>>text>>n;
    for(int x=0;x<n;x++){
        cin>>c>>i>>t;
        aux = text.substr(i,t);
        sort(all(aux));
        vec.push_back(busquedaBinaria(aux,c));
    }
    for(bool aux:vec) cout<<aux<<nl;
    return 0;
}
