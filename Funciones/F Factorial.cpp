ull factorial(const int&n){
    ull total=1;
    for(int x=1;x<=n;x++){
        total*=x;
    }
    return total;
}
