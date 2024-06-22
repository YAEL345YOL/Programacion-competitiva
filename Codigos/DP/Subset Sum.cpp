vll arr;

vvb subsetSum(ll s){
    vvb dp(arr.size()+1,vb(s+1,false));

    fore(i,0,dp.size()) dp[i][0] = true;

    fore(i,1,dp.size()){
        fore(j,1,dp[0].size()){
            if(j>=arr[i-1]){
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    return dp;
}
