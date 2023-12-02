vector<ll>nums;
ll AlgoritmoKanades(){
    ll actSum=0,maxSum=0;
    fore(i,0,nums.size()){
        actSum = max(nums[i],nums[i]+actSum);
        maxSum = max(actSum,maxSum);
    }
    return maxSum;
}
