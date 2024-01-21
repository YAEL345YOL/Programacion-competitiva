// Función factorial sin recursión.
ull factorial(const ull n){
    ull suma=1;
    fore(i,2,n+1) suma*=i;
    return suma;
}
// Función factorial recursiva (sin DP).
ull factorial(const ull n){
    if(n==0 || n==1) return n;
    return factorial(n-1)*n;
}
// Función factorial recursiva (con Memorización).
unordered_map<ull,ull>hashing;
ull factorial(const ull n){
    if(n==0 || n==1) return n;
    if(hashing.count(n)>0) return hashing[n];
    hashing[n] = factorial(n-1)*n;
    return hashing[n];
}
