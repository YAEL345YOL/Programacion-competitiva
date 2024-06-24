vll arr;

ll LISBS(){
    vll dp;

    dp.pb(arr[0]);

    fore(i,1,arr.size()){
        if(arr[i]>dp[dp.size()-1]){
            dp.pb(arr[i]);
        }
        else{
            auto it = lower_bound(all(dp),arr[i]);
            dp[it-dp.begin()] = arr[i];
        }
    }

    return dp.size();
}
/*
    don't forget:
    time complexity O(n*logn)
*/
