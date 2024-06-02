string multiply(string a,char b){
    ll carry=0;
    string result;
    for(auto i=a.size()-1;i>=0;--i){
        ll k = (a[i]-'0')*(b-'0')+carry;
        carry = k/10;
        result = to_string((i==0 ? k:k%10)) + result;
    }
    return result;
}