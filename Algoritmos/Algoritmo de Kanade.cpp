// Encontrar la suma maxima de un subarreglo
ll Kadane(vector<ll>&arreglo){
    ll sumaActual=0,maximaSuma=INT64_MIN;
    fore(i,0,arreglo.size()){
        sumaActual = max(arreglo[i],sumaActual+arreglo[i]);
        maximaSuma = max(sumaActual,maximaSuma);
    }
    return maximaSuma;
}
