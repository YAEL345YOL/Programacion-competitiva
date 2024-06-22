vll UnboundedKnapsack(vpar&items,ll W){
    vll dp(W+1,0);

    fore(i,0,W+1){
        fore(j,0,items.size()){
            if(items[j].first<=i){
                dp[i] = max(dp[i],dp[i-items[j].first]+items[j].second);
            }
        }
    }

    return dp;
}
