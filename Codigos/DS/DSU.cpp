struct DSU{
    ll groups;
    vll parent,child;
    DSU(ll n):groups(n),parent(n+1),child(n+1,1){
        iota(all(parent),0);
    }
    ll findParent(ll u){
        return u==parent[u] ? u:parent[u] = findParent(u);
    }
    void unite(ll u,ll v){
        u = findParent(u);
        v = findParent(v);
        if(u!=v){
            if(child[v]>child[u]) swap(u,v);
            child[u] += child[v];
            parent[v] = u;
            --groups;
        }
    }
    bool same(ll u,ll v){
        return findParent(u)==findParent(v);
    }
};