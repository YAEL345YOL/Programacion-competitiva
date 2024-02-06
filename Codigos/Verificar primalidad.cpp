bool primo(const ll n){
    if(n==2 or n==3) return 1;
    if(n<=1 or n%2==0 or n%3==0) return 0;
    for(long i=5;i*i<=n;i+=6)
        if(n%i==0 || n%(i+2)==0) 
            return 0;
    
    return 1;
}