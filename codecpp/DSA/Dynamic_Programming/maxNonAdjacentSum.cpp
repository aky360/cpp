#include <bits/stdc++.h>
using namespace std;

//this is solution of simple recursion
int solve(vector<int> &nums, int index){
    if(index>nums.size()){
        return 0;
    }
    return max(solve(nums, index+2)+nums[index], solve(nums, index+1)+0);
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
    
    dp[index] = max(solveMem(nums, index-2, dp)+nums[index], solveMem(nums, index-1, dp)+0);
    return dp[index];
}

int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n, -1);
    return solveMem(nums, nums.size()-1, dp);
}


int main() {
    
    vector<int> num = {9, 9, 8, 2};
    cout<<maximumNonAdjacentSum(num)<<endl;

    return 0;
}
