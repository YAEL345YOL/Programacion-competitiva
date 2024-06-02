struct segmentTree{
    vll segtree;
    segmentTree(ll n):segtree(2*n-1){}
    void build(ll l,ll r,ll n,vll arr){
        if(l==r){
            segtree[n] = arr[l];
            return;
        }
        build(l,(l+r)/2,2*n+1,arr); 
        build((l+r)/2+1,r,2*n+2,arr); 
        segtree[n] = max(segtree[2*n+1],segtree[2*n+2]);
    }
    void update(ll l,ll r,ll n,ll p,ll nv){
        if(l==r){
            segtree[n] = nv;
            return;
        }
        if(p<=(l+r)/2) update(l,(l+r)/2,2*n+1,p,nv);
        else update((l+r)/2+1,r,2*n+2,p,nv);
        segtree[n] = max(segtree[2*n+1],segtree[2*n+2]);
    }
    ll query(ll l,ll r,ll n,ll i,ll j){
        if(l>=i && r<=j) return segtree[n];
        else if(l>j or r<i) return INT32_MIN;
        return max(query(l,(l+r)/2,2*n+1,i,j),query((l+r)/2+1,r,2*n+2,i,j));
    }
};