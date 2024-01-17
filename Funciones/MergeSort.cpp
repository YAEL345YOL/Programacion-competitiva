void merge(vector<ll>&arr,ll left,ll mid,ll right){
    ll n1=mid-left+1, n2=right-mid;

    vector<ll>leftArr(n1);
    vector<ll>rightArr(n2);
    
    fore(i,0,n1) leftArr[i]=arr[left+i];
    fore(i,0,n2) rightArr[i]=arr[mid+1+i];  

    ll i=0,j=0,k=left;

    while(i<n1 && j<n2){
        if(leftArr[i]<=rightArr[j]){
            arr[k]=leftArr[i];
            i++;
        }
        else{
            arr[k]=rightArr[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=leftArr[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=rightArr[j];
        j++;
        k++;
    }
}
void mergeSort(vector<ll>&arr,ll left,ll right) {
    if(left<right){
        ll mid=left+(right-left)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}
