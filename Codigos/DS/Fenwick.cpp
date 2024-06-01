struct Fenwick{
    ll n;
    vll fenwick;
    Fenwick(ll _n): fenwick(_n+1,0), n(_n) {}
    void update(ll idx,ll delta){
        for(;idx<=n;idx+=lsb(idx))
            fenwick[idx] += delta;

    }
    ll query(ll idx){
        ll sum=0;
        for(;idx>0;idx-=lsb(idx))
            sum+=fenwick[idx];
        return sum;
    }
};