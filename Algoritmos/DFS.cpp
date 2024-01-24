void DFS(const ll&nodo,vector<bool>&visitados,vector<vector<ll>>&matrizAdyacencia){
    visitados[nodo] = 1;
    cout<< nodo << nl;
    for(auto&adyacente:matrizAdyacencia[nodo]){
        if(!visitados[adyacente]){
            DFS(adyacente,visitados,matrizAdyacencia);
        }
    }
}
void initDFS(const ll&nodoInicial,vector<vector<ll>>&matrizAdyacencia){
    vector<bool>visitados(matrizAdyacencia.size(),0);
    DFS(0,visitados,matrizAdyacencia);
}
