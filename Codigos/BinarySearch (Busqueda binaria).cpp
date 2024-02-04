ll binarySearch(vector<ll>&vec,const ll&numero){
    ll inicio=0,fin=vec.size()-1,medio;
    while(inicio<=fin){
        medio = (inicio+fin)/2;
        if(numero==vec[medio]) return medio;
        else if(numero>vec[medio]) inicio=medio+1;
        else if(numero<vec[medio]) fin=medio-1;
    }
    return -1;
}
