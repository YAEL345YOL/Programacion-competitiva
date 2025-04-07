#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
#define lsb(x) (x & -x) 
#define sp(x) fixed<<setprecision(x)
#define all(x) x.begin(),x.end()
#define fore(it,i,f) for(auto it=i;it<f;++it)

typedef long long ll;
typedef unsigned long long ull;

int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);

    vector<vector<int>>c(10,vector<int>(10));
    
    fore(i,0,10){
        c[i][0] = 1;
    }
    
    fore(i,1,10){
        fore(j,1,10){
            if(j>i){
                continue;
            }
            c[i][j] = c[i-1][j-1] + c[i-1][j];
        }
    }
    
    fore(i,0,10){
        fore(j,0,10){
            cout<<c[i][j]<<" ";
        }
        cout<<nl;
    }

    return 0;
}
