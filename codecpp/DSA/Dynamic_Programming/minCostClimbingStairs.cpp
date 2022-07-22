#include <bits/stdc++.h>
using namespace std;

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


int main() {
  
    vector<int> cost = {10, 15, 20};
    
    cout<<minCostClimbingStairs(cost)<<endl;

    return 0;
}
