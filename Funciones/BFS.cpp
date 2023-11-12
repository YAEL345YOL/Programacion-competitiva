void BFS(vector<vector<ll>>&grafo,const ll&nodoInicial){
    vector<bool>visitado(grafo.size(),0);
    queue<ll>visitando;
    visitando.push(nodoInicial);
    while(!visitando.empty()){
        ll frente = visitando.front();
        visitando.pop();
        if(!visitado[frente]){
            visitado[frente] = 1;
            for(auto&nodo:grafo[frente]) if(!visitado[nodo]) visitando.push(nodo);
        }
    }
}
