#include <bits/stdc++.h>
using namespace std;

//solving using simple recursion method
int solve(vector<int> &cost, int n){
    if(n == 0)
        return cost[0];
    if(n==1)
        return cost[1];
        
    return cost[n] + min(solve(cost, n-1), solve(cost, n-2));
}


int minCostClimbingStairs(vector<int> &cost){
    int n = cost.size();
    return min(solve(cost, n-1), solve(cost, n-2));
}


//solving using Top Down(Recursion + Memoization) methods
int solve(vector<int> &cost, int n, vector<int> &dp){
    if(n == 0)
        return cost[0];
    if(n==1)
        return cost[1];
    if(dp[n] != -1){
        return dp[n];
    }
        
    dp[n] = cost[n] + min(solve(cost, n-1, dp), solve(cost, n-2, dp));
    return dp[n];
}

int minCostClimbingStairs(vector<int> &cost){
    int n = cost.size();
    vector<int> dp(n+1, -1);
    return min(solve(cost, n-1, dp), solve(cost, n-2, dp));
}


//solving using Bottom Up methods
int solve(vector<int> &cost, int n){
    vector<int> dp(n+1);
    
    dp[0] = cost[0];
    dp[1] = cost[1];
    
    for(int i=2;i<n;i++){
        dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
    }
    return min(dp[n-1], dp[n-2]);
}


int minCostClimbingStairs(vector<int> &cost){
    int n = cost.size();
    //vector<int> dp(n+1, -1);
    return solve(cost, n);
}




int main() {
  
    vector<int> cost = {10, 15, 20};
    
    cout<<minCostClimbingStairs(cost)<<endl;

    return 0;
}
