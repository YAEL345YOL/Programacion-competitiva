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
int invert(string x){
    string aux;
    for(int y=x.size()-1;y>=0;y--){
        if(x[y]!='0') aux+=x[y];
    }
    return stoi(aux);
}
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    int n;
    string n1,n2;
    cin>>n;
    int nu[n]={0};
    for(int x=0;x<n;x++){
        cin>>n1>>n2;
        nu[x] = invert(to_string(invert(n1)+invert(n2)));
    }
    for(int x:nu){
        cout<<x<<nl;
    }
    return 0;
}
