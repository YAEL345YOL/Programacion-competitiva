/*
N = filas de la matriz
M = columnas de la matriz
f = fila a validar
c = columna a validar
*/

bool posValid(const ll&N,const ll&M,const ll&f,const ll&c){
    return f>=0 && c>=0 && f<N && c<M; 
}
