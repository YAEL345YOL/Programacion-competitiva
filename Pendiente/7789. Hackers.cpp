#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define cnl cout << "\n"
#define ll long long
#define ull unsigned long long
#define sp(x) fixed << setprecision(x)
#define all(x) x.begin(), x.end()
#define letter(x) x >= 65 && x <= 90 || x >= 97 && x <= 122 ? true : false
#define number(x) x >= 48 && x <= 57 ? true : false
int codificar(int numero){
    int k = 0;
    string aux = to_string(numero),result;
    for(int x=aux.size()-1;x>=0;x--){
        if(aux[x]=='0' && k==0){
            while(aux[x]=='0'){
                x--;
            }
            k++;
        }
        result += aux[x];
    }
    return stoi(result);
}
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    vector<int> v;
    int n,aux1,aux2;
    cin>>n;
    for(int x=0;x<n;x++){
        cin>>aux1>>aux2;
        v.push_back(codificar(codificar(aux1) + codificar(aux2)));
    }
    for(int aux:v){
        cout<<aux<<nl;
    }
    return 0;
}
