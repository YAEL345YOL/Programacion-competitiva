void bfs(const int &nodoInicial,vector<vector<int>>&grafo){
    vector<bool>visitado(grafo.size(),0);
    queue<int>visitando;
    visitando.push(nodoInicial);
    while(!visitando.empty()){
        int frente = visitando.front();
        visitando.pop();
        if(!visitado[frente]){
            visitado[frente] = 1;
            for(int nodo:grafo[frente]) if(!visitado[nodo]) visitando.push(nodo);
        }
    }
}
