string sum(const string a,const string b){
    string r;
    for(ll i=a.size()-1,j=b.size()-1,c=0;i>=0 or j>=0 or c>0;--i,--j){
        ll s = (i>=0 ? a[i]-'0':0) + (j>=0 ? b[j]-'0':0) + c;
        c = s/10;
        r = to_string(s%10) + r;
    }
    return r;
}

string multiply(const string a,const string b){
    string r;
    vector<string>l;
    for(ll i=a.size()-1;i>=0;--i){
        ll c=0;
        string act(a.size()-1-i,'0');
        for(ll j=b.size()-1;j>=0;--j){
            ll s = (a[i]-'0') * (b[j]-'0') + c;
            c = s/10;
            act = (j>0 ? to_string(s%10):to_string(s)) + act;
        }
        l.pb(act);
    }
    for(auto&e:l) r = sum(r,e);
    return r;
}
