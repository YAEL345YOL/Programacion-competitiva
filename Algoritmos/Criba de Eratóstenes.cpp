ull MAX = /*tamaño de la criba*/ 1000000;
vector<bool>cribaDeEratostenes(MAX,1);
void generarPrimos(){
    cribaDeEratostenes[0] = cribaDeEratostenes[1] = 0;
    for(ll i=2;i*i<=cribaDeEratostenes.size();++i){
        if(cribaDeEratostenes[i]){
            for(ll j=i*i;j<cribaDeEratostenes.size();j+=i) cribaDeEratostenes[j] = 0;
        }
    }
}