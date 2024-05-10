// ΨΔΣL345ΨΘL
#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define f first
#define s second
#define pb push_back
#define pf push_front
#define lsb(x) (x & -x) 
#define sp(x) fixed<<setprecision(x)
#define all(x) x.begin(),x.end()
#define fore(it,i,f) for(auto it=i;it<f;++it)
#define letter(x) x>=65 && x<=90 || x>=97 && x<=122 ? true:false
#define number(x) x>=48 && x<=57 ? true:false
#define fastIO ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll>par;
typedef vector<ll>vll;
typedef vector<vector<ll>>vvll;
typedef vector<bool>vb;

/*'A' = 65 'Z' = 90
  'a' = 97 'z' = 122
  '0' = 48 '9' = 57 */

struct nodo{
    ll valor;
    nodo* izquierda = nullptr;
    nodo* derecha   = nullptr;
};

struct binaryTree{
    nodo* raiz = new nodo;
    void add(nodo* &actual,ll _valor){
        if(actual==nullptr){
            actual = new nodo;
            actual->valor = _valor;
            return;
        }
        if(_valor>actual->valor) add(actual->derecha,_valor);
        else if(_valor<actual->valor) add(actual->izquierda,_valor);
    }
    void preOrder(nodo* actual){
        if(actual==nullptr) return;
        cout<<actual->valor<<' ';
        preOrder(actual->izquierda);
        preOrder(actual->derecha);
    }
    void inOrder(nodo* actual){
        if(actual==nullptr) return;
        inOrder(actual->izquierda);
        cout<<actual->valor<<' ';
        inOrder(actual->derecha);
    }
    void postOrder(nodo* actual){
        if(actual==nullptr) return;
        postOrder(actual->izquierda);
        postOrder(actual->derecha);
        cout<<actual->valor<<' ';
    }
};

int main(){
    fastIO;

    binaryTree myTree;

    ll n;
    cin>>n;

    fore(i,0,n){
        ll aux;
        cin>>aux;
        if(i==0) myTree.raiz->valor = aux;
        else myTree.add(myTree.raiz,aux);
    }

    myTree.preOrder(myTree.raiz);
    cout<<nl;
    myTree.inOrder(myTree.raiz);
    cout<<nl;
    myTree.postOrder(myTree.raiz);

    return 0;
}
