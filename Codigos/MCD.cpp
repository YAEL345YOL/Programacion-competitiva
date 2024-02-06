// Algoritmo de euclides O(log(min(a, b)));
ll algoritmoEuclides(ll a,ll b){
    if(b>a) swap(a,b);
    while(a%b!=0){
        ll aux;
        aux = a;
        a = b;
        b = aux%b;
    }   
    return b;
}
// Variante con recursión  O(log(min(a, b)))
ll algoritmoEuclides(ll a,ll b){ 
    return b ? algoritmoEuclides(b,a%b):a; 
}
