ll n,c=0;
vll columnas(n,-1);

bool valid(ll fila,ll columna){
    fore(i,0,columna) if(columnas[i]==fila or abs(columnas[i]-fila)==abs(i-columna)) return 0;
    return 1;
}

void backtracking(ll columna,ll reinas){
    if(reinas==n){
        ++c;
        return;
    }
    if(columna==n) return;
    fore(i,0,n){
        if(valid(i,columna)){
            columnas[columna] = i;
            backtracking(columna+1,reinas+1);
            columnas[columna] = -1;
        }
    }
}
