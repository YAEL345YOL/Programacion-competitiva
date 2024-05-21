vll arr,actual;
vvll subconjuntos;

void todosSubconjuntos(ll i){
    if(i==arr.size()){
        subconjuntos.pb(actual);
        return;
    }
    actual.pb(arr[i]);
    todosSubconjuntos(i+1);
    actual.pop_back();
    todosSubconjuntos(i+1);
}