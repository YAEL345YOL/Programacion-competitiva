vll arr, act;
vvll combinations;

void combination(ll i,ll s){
    if(act.size()==s){
        combinations.pb(act);
        return;
    }
    if(i==arr.size()) return;
    act.pb(arr[i]);
    combination(i,s);
    act.pop_back();
    act.pb(arr[i]);
    combination(i+1,s);
    act.pop_back();
}
