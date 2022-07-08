#include <iostream>
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

// This is the solution from top of the stairs to down stairs
// This counts the number of ways to reach down to the stairs from top of stairs
int solveEnd(long long nStairs, int i){       // i is the current stair position and nStairs is the total stairs.
    if(i==0){
        return 1;
    }
    if(i<0){
        return 0;
    }
    return solveEnd(nStairs, i-1) + solveEnd(nStairs, i-2) % MOD;
}

int countDistinctWayToClimbStairEnd(long long nStairs, int n){
    int ans = solveEnd(nStairs, n);
    return ans;
}
//f(n) = f(n-1) + f(n-2);       //This means that if the current position is n then the way to reach from top Stairs to first Stairs is n-1 or n-2
// because there is only two options to climp the stairs either one single steps or two steps at a time.


// This is the solution from down of the stairs to top stairs
// This counts the number of ways to reach top to the stairs from down of stairs
int solveStart(long long nStairs, int i){        // i is the current stair position and nStairs is the total stairs.
    if(i == nStairs)
        return 1;
    if(i>nStairs)
        return 0;
    
    return solveStart(nStairs, i+1) + solveStart(nStairs, i+2) % MOD;
}

int countDistinctWayToClimbStairStart(long long nStairs){
    int ans = solveStart(nStairs, 0);
    return ans;
}
//f(n) = f(n+1) + f(n+2);      //This means that if the current position is n then the way to reach the nStairs is from n+1 or from n+2
// because there is only two options to climp the stairs either one single steps or two steps at a time.


//driver code
int main() {
    long long stairs = 5;
    cout<<countDistinctWayToClimbStairEnd(stairs,stairs)<<endl;
    cout<<countDistinctWayToClimbStairStart(stairs);
    return 0;
}
