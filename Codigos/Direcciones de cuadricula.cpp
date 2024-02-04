// Determina si una posición a la que se quiere ingresar es valid en relacion NxM.
bool posValid(const ll&N,const ll&M,const ll&fi,const ll&co){ return fi>=0 && co>=0 && fi<N && co<M; }
// Cuadro casillas (arriba, abajo, derecha y izquierda).
int dr[] = {-1,0,1,0};
int dc[] = {0,1,0,-1};
// Ocho casillas.
int dr[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dc[] = {-1, 1, -1, 0, 1, -1, 0, 1};
