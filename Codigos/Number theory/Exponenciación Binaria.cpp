ll fpow(ll b,ll e){
    if(e==0) return 1;
    ll r = fpow(b,e/2);
    if(e%2) return r*r*b;
    return r*r;
}
