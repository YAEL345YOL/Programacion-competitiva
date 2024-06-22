vll arr,act;
vvll subsets;

void subsets(ll i){
    if(i==arr.size()){
        subsets.pb(act);
        return;
    }
    act.pb(arr[i]);
    subsets(i+1);
    act.pop_back();
    subsets(i+1);
}
