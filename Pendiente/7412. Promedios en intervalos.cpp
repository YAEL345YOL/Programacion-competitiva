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
struct alumno{
    int numeroDeLista,promedio;
}alumnoaux;
int promedioRango(vector<alumno>&alumnos,int &inicio,int &fin){
    int total=0,k=0;
    for(alumno &aux:alumnos){
        if(aux.numeroDeLista>=inicio&&aux.numeroDeLista<=fin){
            total+=aux.promedio;
            k++;
        }
    }
    if(k!=0) return total/k;
    else return -1;
}
int main(){
    cin.tie(0)->sync_with_stdio(0),cout.tie(0);
    vector<int>respuestas;
    vector<alumno>alumnos;
    int a,inicio,fin;
    cin>>a;
    for(int x=0;x<a;x++){
        cin>>alumnoaux.numeroDeLista>>alumnoaux.promedio;
        alumnos.push_back(alumnoaux);
    }
    cin>>a;
    for(int x=0;x<a;x++){
        cin>>inicio>>fin;
        respuestas.push_back(promedioRango(alumnos,inicio,fin));
    }
    for(int aux:respuestas) cout<<aux<<nl;
    return 0;
}
