vvll Knapsack(vpar&items,ll W){
    vvll dp(items.size()+1,vll(W+1,0));

    fore(i,1,dp.size())
        fore(j,1,dp[0].size())
            if(j-items[i-1].second>=0)
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-items[i-1].second]+items[i-1].first);

    return dp;
}
/*
    don't forget:
    vpar items = {vi,wi}; 0-indexed
*/
