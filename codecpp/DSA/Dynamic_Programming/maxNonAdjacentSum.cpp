#include <bits/stdc++.h>
using namespace std;

//this is solution of simple recursion having exponential T.C. 
int solve(vector<int> &nums, int index){
    if(index>nums.size()){
        return 0;
    }
    int incl = solve(nums, index+2)+nums[index];
    int excl = solve(nums, index+1)+0;
    return max(incl, excl);
}


//this is solution of using memoization technique
int solveMem(vector<int> &nums, int index, vector<int> &dp){
    if(index==0){
        return nums[0];
    }
    if(index<0){
        return 0;
    }
    if(dp[index] != -1){
        return dp[index];
    }
    
    int incl = solveMem(nums, index-2, dp)+nums[index];
    int excl = solveMem(nums, index-1, dp)+0;
    
    dp[index] = max(incl, excl);
    return dp[index];
}
//T.C.  =>  O(N)
//S.C   =>  O(N) + O(N)


//this is solution of using tabulation technique
int solveTab(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n, 0);
    dp[0] = nums[0];
    
    for(int i=1;i<n;i++){
        int incl = dp[i-2] + nums[i];
        int excl = dp[i-1] + 0;
        dp[i] = max(incl, excl);
    }
    
    return dp[n-1];
}
//T.C.  =>  O(N)
//S.C   =>  O(N)


//this is space optimization technique
int solveSpcOpt(vector<int> &nums){
    int n = nums.size();
    int prev2 = 0;
    int prev1 = nums[0];
    
    for(int i=1;i<n;i++){
        int incl = prev2 + nums[i];
        int excl = prev1 + 0;
        
        int ans = max(incl, excl);
        
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}
//T.C.  =>  O(N)
//S.C.  =>  O(1)


int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n, -1);
    //return solveMem(nums, nums.size()-1, dp);    //memoization method
    //return solveTab(nums);                       //tabulation method
    //return solveSpcOpt(nums);                    //space optimization
}


int main() {
    
    vector<int> num = {9, 9, 8, 2};
    cout<<maximumNonAdjacentSum(num)<<endl;

    return 0;
}
