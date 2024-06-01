bool prime(ll n){
    if(n<=1) return 0;
    for(auto i=2;i*i<=n;++i)
        if(n%i==0) 
            return 0;
    return 1;
}
