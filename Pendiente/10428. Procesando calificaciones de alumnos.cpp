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
    vector<int>calf;
    int n,aux2;
    string aux;
    cin>>n;
    for(int x=0;x<n;x++){
        cin.ignore();
        getline(cin,aux);
        if(aux[0]=='R'){
            aux.replace(0,9,"");
            calf.push_back(stoi(aux));
        }
        else if(aux[0]=='C')
    }
    return 0;
}
