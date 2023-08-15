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
bool BusquedaBinaria(vector<int>v,int numero){
    int inicio = 0, fin = v.size() - 1, medio;
    while(inicio<=fin){
        medio = (inicio + fin) / 2;
        if(v[medio]==numero) return true;
        else if(v[medio]<numero) fin = medio - 1;
        else if(v[medio]>numero) inicio = medio + 1;
    }
    return false;
}
int main(){
    cin.tie(0)->sync_with_stdio(0), cout.tie(0);
    vector<bool> answers;
    vector<int> a;
    vector<int> b;
    int n,n2,aux;
    cin >> n;
    for (int x = 0; x < n; x++){
        cin >> aux;
        a.push_back(aux);
    }
    cin >> n2;
    for (int x = 0; x < n2; x++){
        cin >> aux;
        answers.push_back(BusquedaBinaria(a, aux));
    }
    for(bool a:answers){
        cout << a << ' ';
    }
    return 0;
}
