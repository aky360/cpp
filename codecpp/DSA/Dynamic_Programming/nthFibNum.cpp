//Nth Fibonacci Number code studio coding Ninja
//Top Down = Recursion + Memoization
//Bottom Up = Tabulation

#include <bits/stdc++.h>
using namespace std;


//This solution is using Recursion + Memoization method
int fibMemoization(int n, vector<int> &dp){
    if(n<=1){
        return n;
    }
    if(dp[n] != -1){
        return dp[n];
    } 
    
    dp[n] = fibMemoization(n-1, dp)+fibMemoization(n-2, dp);
    return dp[n];
}
//T.C. = O(n)
//S.C. = O(n) + O(n) => O(n)


//This solution is using the Tabulation method 
void fibTabulation(int n){
    vector<int> dp(n+1);     //vector of size n+1;
    dp[0] = 0;               //initial values
    dp[1] = 1;
    
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    cout<<dp[n]<<endl;
}
//T.C. = O(n)
//S.C. = O(n)


//This solution is using Space Optimization
int fib(int n){
    int p1=0, p2=1;
    int curr;
    
    if(n==0){
        return p1;
    }
    
    for(int i=2;i<=n;i++){
        curr = p1 + p2;
        p1 = p2;
        p2 = curr;
    }
    return curr;
}
//T.C. = O(n)
//S.C. = O(1)


int main(){
    int n;
    cin>>n;
    
    vector<int> dp(n+1);
    
    for(int i=0;i<=n;i++)
        dp[i] = -1;
        
    cout<<fibMemoization(n, dp)<<endl;
    fibTabulation(n);
    cout<<fib(n)<<endl;
    return 0;
}
