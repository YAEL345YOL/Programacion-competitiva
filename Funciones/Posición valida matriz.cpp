/*
N = filas de la matriz
M = columnas de la matriz
fi = fila a validar
c = columna a validar
*/

bool posValid(const ll&N,const ll&M,const ll&fi,const ll&c){
    return fi>=0 && c>=0 && fi<N && c<M; 
}
