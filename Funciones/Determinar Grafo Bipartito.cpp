bool bipartite(vector<vector<ll>>&graph,const int&initialNode){
    vector<ll>colors(graph.size(),-1);
    queue<ll>visiting;
    colors[initialNode] = 0;
    visiting.push(initialNode);
    while(!visiting.empty()){
        ll actual = visiting.front();
        visiting.pop();
        for(auto&neighbor:graph[actual]){
            if(colors[neighbor]==-1){
                colors[neighbor] = 1-colors[actual];
                visiting.push(neighbor);
            }
            else if(colors[neighbor]==colors[actual]) return 0;
        }
    }
    return 1;
}
