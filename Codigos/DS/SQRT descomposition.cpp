vll arr;

struct SQRT{
    vll buckets;
    ll BLOCK,NBLOCK;
    SQRT(ll n):BLOCK(sqrt(n)),NBLOCK(n/BLOCK+(n%BLOCK ? 1:0)){
        buckets.resize(NBLOCK,0);
        fore(i,0,n) buckets[i/BLOCK] += arr[i];
    }
    ll query(ll l,ll r){
        ll sum=0;
        while(l<=r){
            if(l%BLOCK==0 && l+BLOCK-1<=r){
                sum += buckets[l/BLOCK];
                l += BLOCK;
            }
            else{
                sum += arr[l];
                ++l;
            }
        }
        return sum;
    }
    void update(ll i,ll n){
        buckets[i/BLOCK] += (n-arr[i]);
        arr[i] = n;
    }
};
