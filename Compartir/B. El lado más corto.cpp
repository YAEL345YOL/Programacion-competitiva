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
double f(double x1,double y1,double x2,double y2){
    return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    double x1,y1,x2,y2,x3,y3,x4,y4,menor;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    
    menor = f(x1,y1,x2,y2);
    menor = (menor>f(x2,y2,x3,y3)) ? f(x2,y2,x3,y3):menor;
    menor = (menor>f(x3,y3,x4,y4)) ? f(x3,y3,x4,y4):menor;
    menor = (menor>f(x4,y4,x1,y1)) ? f(x4,y4,x1,y1):menor;
    
    cout<<menor;
    
    return 0;
}
