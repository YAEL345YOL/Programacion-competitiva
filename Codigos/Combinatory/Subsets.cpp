vll arr,act;
vvll subsets;

void subset(ll i){
    if(i==arr.size()){
        subsets.pb(act);
        return;
    }
    act.pb(arr[i]);
    subset(i+1);
    act.pop_back();
    subset(i+1);
}
