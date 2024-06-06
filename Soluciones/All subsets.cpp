vll arr,act;
vvll subsets;

void allSubsets(ll i){
    if(i==arr.size()){
        subsets.pb(act);
        return;
    }
    act.pb(arr[i]);
    allSubsets(i+1);
    act.pop_back();
    allSubsets(i+1);
}
