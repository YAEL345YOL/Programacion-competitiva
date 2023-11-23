// ΨΔΣL345ΨΘL
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define f first
#define s second
#define pb push_back
#define ll long long
#define ull unsigned long long
#define sp(x) fixed<<setprecision(x)
#define all(x) x.begin(),x.end()
#define fore(it,i,f) for(auto it=i;it<f;++it)
#define letter(x) x>=65 && x<=90 || x>=97 && x<=122 ? true:false
#define number(x) x>=48 && x<=57 ? true:false
/*'A' = 65 'Z' = 90
  'a' = 97 'z' = 122
  '0' = 48 '9' = 57 */
bool mayor(const vector<ll>&robot,ll f,const ll&v){
    fore(i,0,robot.size()){
        if(robot[i]>=f) return 0;
        f+=v;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll t,r,f,v=0;
    cin>>t>>r>>f;
    vector<ll>robot(t+1);
    robot[0]=r;

    fore(i,1,t+1){
        ll aux;
        cin>>aux;
        robot[i] = robot[i-1] + aux;
    }

    while(!(mayor(robot,f,v))) ++v;

    cout<<v;
  
    return 0;
}
