// Determina si una posición a la que se quiere ingresar es valid en relacion NxM.
bool valid(par u){ return u.first>=0 && u.second>=0 && u.first<n && u.second<u.second; }
// Cuadro casillas (arriba, abajo, derecha y izquierda).
int dr[] = {-1,0,1,0};
int dc[] = {0,1,0,-1};
// Ocho casillas.
int dr[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dc[] = {-1, 1, -1, 0, 1, -1, 0, 1};
