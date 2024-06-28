vll arr, act;
vvll subsets;

void subsequence(ll i){
    if(i==arr.size()){
        subsets.pb(act);
        return;
    }
    act.pb(arr[i]);
    subsequence(i+1);
    act.pop_back();
    subsequence(i+1);
}
