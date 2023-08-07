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
void eliminar_elemento(vector<int>&arreglo1,int index){
    vector<int>arreglo2;
    for(int x=0;x<arreglo1.size();x++){
        if(x==index) continue;
        arreglo2.push_back(arreglo1[x]);
    }
    arreglo1 = arreglo2;
}
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    vector<int>a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    eliminar_elementos(a,2);
    for(auto x:a){
        cout<<x<<" ";
    }
    return 0;
}
