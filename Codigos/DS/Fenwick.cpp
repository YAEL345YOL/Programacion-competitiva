struct Fenwick{
    vll fenwick;
    Fenwick(ll n): fenwick(n+1,0), {}
    void update(ll idx,ll delta){
        for(;idx<=fenwick.size();idx+=lsb(idx))
            fenwick[idx] += delta;

    }
    ll query(ll idx){
        ll sum=0;
        for(;idx>0;idx-=lsb(idx))
            sum+=fenwick[idx];
        return sum;
    }
};
