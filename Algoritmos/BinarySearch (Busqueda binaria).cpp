ll binarySearch(vector<ll>&vec,const ll&num){
    ll left=0,right=vec.size()-1,mid;
    while(left<=right){
        mid = (left+right)/2;
        if(num==vec[mid]) return mid;
        else if(num>vec[mid]) left=mid+1;
        else if(num<vec[mid]) right=mid-1;
    }
    return -1;
}
