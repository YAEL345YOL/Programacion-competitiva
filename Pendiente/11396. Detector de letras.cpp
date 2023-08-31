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
bool vocalMayuscula(string&vocalesMayuscula,char&aux){
    if(!aux>=65 && aux<=90) return 0;
    for(auto vocal:vocalesMayuscula){
        if(aux==vocal) return 1;
    }
    return 0;
}
bool consonanteMayuscula(string&vocalesMayuscula,char&aux){
    if(!aux>=65 && aux<=90) return 0;
    for(auto vocal:vocalesMayuscula){
        if(aux==vocal) return 0;
    }
    return 1;
}
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    int k=0;
    char aux;
    string vocalesMayuscula="AEIOU",resultado;
    while(k!=10){
        cin>>aux;
        if(vocalMayuscula(vocalesMayuscula,aux)) resultado+='V';
        else if(consonanteMayuscula(vocalesMayuscula,aux)) resultado+='C';
        resultado+=' ';
        k++;
    }
    cout<<resultado;
    return 0;
}
