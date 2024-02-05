// O(log(potencia))
unordered_map<ull,ull>mem;
ull fpow(ull n,ull pot){
    if(mem.count(pot)>0) return mem[pot];

    if(pot==0) return 1;
    if(pot==1) return n;

    if(pot%2==0) mem[n] = fpow(n,pot/2);
    else mem[n] = fpow(n,pot-1)*n;

    return mem[n];
}
