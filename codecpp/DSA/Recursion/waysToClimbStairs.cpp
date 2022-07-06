#include <iostream>
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;


int solve(long long nStairs, int i){
    if(i == nStairs)
        return 1;
    if(i>nStairs)
        return 0;
    
    return solve(nStairs, i+1) + solve(nStairs, i+2) % MOD;
}


int countDistinctWayToClimbStair(long long nStairs){
    int ans = solve(nStairs, 0);
    return ans;
}


int main() {
    long long stairs = 5;
    cout<<countDistinctWayToClimbStair(stairs);
    return 0;
}
