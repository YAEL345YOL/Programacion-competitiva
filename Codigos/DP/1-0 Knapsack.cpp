vvll Knapsack(vpar&items,ll W){
    vvll dp(items.size()+1,vll(W+1,0));

    fore(i,1,dp.size()){
        fore(w,1,dp[0].size()){
            if(items[i-1].first<=w){
                dp[i][w] = max(dp[i-1][w],dp[i-1][w-items[i-1].first]+items[i-1].second);
            }
            else{
                dp[i][w] = dp[i-1][w];
            }
        }
    }   

    return dp;
}
/*
    don't forget:
    vpar items = {vi,wi}; 0-indexed
*/
