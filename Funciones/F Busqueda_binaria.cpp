int busquedaBinaria(vector<int>&vec,int num){
    int ini=0,fin=vec.size()-1,medio;
    while(ini<=fin){
        medio = (ini+fin)/2;
        if(num==vec[medio]) return medio;
        else if(num>vec[medio]) ini=medio+1;
        else if(num<vec[medio]) fin=medio-1;
    }
    return -1;
}
