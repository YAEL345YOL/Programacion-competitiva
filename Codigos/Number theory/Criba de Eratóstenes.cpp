ll MAX = 10000000;
vector<bool>primo(MAX,1);
void generarCriba(){
    primo[0] = primo[1] = 0;
    for(ll i=2;i*i<=MAX;++i)
        if(primo[i])
            for(ll j=i*i;j<=MAX;j+=i)
                primo[j] = 0;
}
