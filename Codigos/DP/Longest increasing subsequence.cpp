vll arr;

vll LCS(){
    vll dp(arr.size(),1);

    for(ll i=arr.size()-1;i>=0;--i){
        for(ll j=i;j<arr.size();++j){
            if(arr[i]<arr[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }

    return dp;
}
/*
    don't forget:
    time complexity O(n^2)
*/
