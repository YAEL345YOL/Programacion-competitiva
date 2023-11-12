vector<bool>cribaDeEratostenes(1000000,1); // 10^6
void generarPrimos(){
    cribaDeEratostenes[0] = cribaDeEratostenes[1] = 0;
    for(ll i=2;i*i<=cribaDeEratostenes.size();++i){
        if(cribaDeEratostenes[i]){
            for(ll j=i*i;j<cribaDeEratostenes.size();j+=i) cribaDeEratostenes[j] = 0;
        }
    }
}
