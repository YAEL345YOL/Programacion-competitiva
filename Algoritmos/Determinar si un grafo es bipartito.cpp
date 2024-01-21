bool grafoBipartito(vector<vector<ll>>&matrizAdyacencia,const ll&nodoInicial){
    vector<ll>colors(matrizAdyacencia.size(),-1);
    queue<ll>visiting;
    colors[nodoInicial] = 0;
    visiting.push(nodoInicial);
    while(!visiting.empty()){
        ll actual = visiting.front();
        visiting.pop();
        for(auto&neighbor:matrizAdyacencia[actual]){
            if(colors[neighbor]==-1){
                colors[neighbor] = 1-colors[actual];
                visiting.push(neighbor);
            }
            else if(colors[neighbor]==colors[actual]) return 0;
        }
    }
    return 1;
}
