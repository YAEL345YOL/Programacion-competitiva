vll act;

void combination(ll i,ll s){
    if(act.size()==s){
        for(auto&e:act) cout<<e<<' ';
        cout<<nl;
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
