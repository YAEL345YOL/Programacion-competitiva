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
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    int n,a,aux;
    cin>>n;
    int array_[n];
    for(int x=0;x<n;x++){
        cin>>array_[x];
    }
    cin>>a;
    for(int x=0;x<a;x++){
        cin>>aux;
        for(int x=0;x<n;x++){
            if(aux==array_[x]) array_[x]++;
        }
    }
    for(int k:array_){
        cout<<k<<' ';
    }
    return 0;
}
