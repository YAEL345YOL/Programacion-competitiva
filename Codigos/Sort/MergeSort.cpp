vll arr;

void merge(ll low,ll mid,ll hight){
    vll temp;
    ll left=low,right=mid+1;

    while(left<=mid && right<=hight){
        if(arr[left]<=arr[right]){
            temp.pb(arr[left]);
            ++left;
        }
        else if(arr[right]<arr[left]){
            temp.pb(arr[right]);
            ++right;
        }
    }

    while(left<=mid){
        temp.pb(arr[left]);
        ++left;
    }

    while(right<=hight){
        temp.pb(arr[right]);
        ++right;
    }
    
    fore(i,0,temp.size())
        arr[i+low] = temp[i];
    
}

void mergeSort(ll low,ll hight){
    if(low>=hight) return;
    ll mid = (low+hight)/2;
    mergeSort(low,mid);
    mergeSort(mid+1,hight);
    merge(low,mid,hight);
}