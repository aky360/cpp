/*You are given an array of ‘N’ distinct integers and an integer ‘X’ representing the target sum. 
You have to tell the minimum number of elements you have to take to reach the target sum ‘X’.
*/

#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &num, int x){
    if(x==0){
        return 0;
    }
    if(x<0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i=0;i<num.size();i++){
        int ans = solve(num, x-num[i]);
        if(ans != INT_MAX){
            mini = min(mini, 1+ans);
        }
    }
    return mini;
}


//using MEMOIZATION DP TECHNIQUE 
int solveMemoization(vector<int> &num, int x, vector<int> &dp){
    if(x==0){
        return 0;
    }
    if(x<0){
        return INT_MAX;
    }
    if(dp[x] != -1){
        return dp[x];
    }
    
    int mini = INT_MAX;
    for(int i=0;i<num.size();i++){
        int ans = solve(num, x-num[i]);
        if(ans != INT_MAX){
            mini = min(mini, 1+ans);
        }
    }
    dp[x] = mini;
    return dp[x];
}


int minimumElements(vector<int> &num, int x){
    vector<int> dp(x+1, -1);
    int ans  = solveMemoization(num, x, dp);
    
    //int ans = solve(num, x);
    
    if(ans == INT_MAX){
        return -1;
    }
    else{
        return ans;
    }
    return ans;
}


int main() {
    vector<int> num = {1,2,3};
    int target = 7;
    
    cout<<minimumElements(num, target)<<endl;
    return 0;
}
