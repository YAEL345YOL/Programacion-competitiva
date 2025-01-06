const ll m = 10e9 + 7;
const ll p = 31;

ll compute_hash(string c){
    ll n = c.size(), hash_result = 0, powt = 1;
    for(ll i = 0; i < n ; ++i){
        hash_result += (ll) (c[i] * powt) % m;
        powt = (p * powt) % m;
    }
    return hash_result;
}

vector<vector<ll>> grupos_identicos(vector<string>&s){
    ll n = s.size();

    vector<pair<ll,ll>>hashes(n);
    for(ll i = 0; i < n ; ++i){
        hashes[i] = {compute_hash(s[i]),i};
    }
    
    sort(all(hashes));

    vector<vector<ll>>groups;
    for(ll i = 0; i < n ; ++i){
        if(i == 0 || hashes[i].first != hashes[i-1].first){
            groups.emplace_back();
        }   
        groups.back().push_back(hashes[i].second);
    }
    return groups;
}
