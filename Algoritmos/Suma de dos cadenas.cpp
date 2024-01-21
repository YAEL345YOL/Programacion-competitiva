// Suma resultante de sumar dos cadenas de numeros (funcional para numeros gigantescos).
string sumaDosNumerosCadenas(const string&s1,const string&s2){
    string sumaFinal = "";
    ll i = s1.size()-1,j = s2.size()-1, carreo=0;
    while(i>=0 or j>=0 or carreo>0){
        ll suma = (i>=0 ? s1[i]-48:0) + (j>=0 ? s2[j]-48:0) + carreo;
        carreo = suma / 10;
        sumaFinal.insert(sumaFinal.begin(),(suma%10)+'0');
        --i;
        --j;
    }
    return sumaFinal;
}
