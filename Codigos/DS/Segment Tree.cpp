vll arr;

struct segmentTree{
    vll segtree;
    segmentTree(ll n):segtree(4*n){}
    void build(ll l,ll r,ll n){
        if(l==r){
            segtree[n] = arr[l];
            return;
        }
        ll m = (l+r)/2;
        build(l,m,2*n); 
        build(m+1,r,2*n+1); 
        segtree[n] = max(segtree[2*n],segtree[2*n+1]);
    }
    void update(ll l,ll r,ll n,ll p,ll nv){
        if(l==r){
            segtree[n] = nv;
            return;
        }
        ll m = (l+r)/2;
        if(p<=m) update(l,m,2*n,p,nv);
        else update(m+1,r,2*n+1,p,nv);
        segtree[n] = max(segtree[2*n],segtree[2*n+1]);
    }
    ll query(ll l,ll r,ll n,ll i,ll j){
        if(l>j or r<i) return INT32_MIN;
        if(l>=i && r<=j) return segtree[n];
        ll m = (l+r)/2;
        return max(query(l,m,2*n,i,j),query(m+1,r,2*n+1,i,j));
    }
};
