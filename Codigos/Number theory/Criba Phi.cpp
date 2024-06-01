ll MAX = 1000000;
vll phi(MAX);
void phiSieve(){
    iota(all(phi),0);
    fore(i,2,MAX)
        if(phi[i]==i)
            for(ll j=i;j<MAX;j+=i)
                phi[j]-=phi[j]/i;    
}
