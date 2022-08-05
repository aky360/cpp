#include <bits/stdc++.h>
using namespace std;


long long int solve(vector<int> &nums){
    
    int n = nums.size();
    long long int prev2 = 0;
    long long int prev1 = nums[0];
    
    for(int i=1;i<n;i++){
        int incl = prev2 + nums[i];
        int excl = prev1 + 0;
        
        int ans = max(incl, excl);
        
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
    
}
//T.C  =>  O(N)
//S.C  =>  O(1)


long long int houseRobber(vector<int> &valueInHouse){
    int n = valueInHouse.size();
    vector<int> first, second;
    
    if(n == 1){
        return valueInHouse[0];
    }
    
    for(int i=0;i<n;i++){
        if(i != n-1){
            first.push_back(valueInHouse[i]);
        }
        if(i != 0){
            second.push_back(valueInHouse[i]);
        }
    }
    
    return max(solve(first), solve(second));
}
//T.C.  =>  O(N)
//S.C.  =>  O(N)

int main() {
    // Write C++ code here
    vector<int> num = {2,4, 6,8,9};
    cout<<houseRobber(num)<<endl;

    return 0;
}



/*
class Solution {
public:
    
    int solve(vector<int>& nums, int n, vector<int> &dp){
        if(n == 1){
            return nums[0];
        }
        if(n < 0){
            return 0;
        }
        if(dp[n] != -1)
            return dp[n];
        dp[n] = solve(nums, n-1, dp)+nums[n];
        return dp[n];
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> first;
        vector<int> second;
        
        for(int i=0;i<n;i++){
            if(i != 0){
                second.push_back(nums[i]);
            }
            if(i != n-1){
                first.push_back(nums[i]);
            }
        }
        vector<int> dp(n+1, -1);
        int ans = max(solve(first, n, dp), solve(second, n, dp));
        return ans;
    }
};
*/


/*5_8_22

class Solution {
public:
    
    int solve(vector<int>& nums, int n){
        if(n == 1){
            return nums[0];
        }
        if(n<=0){
            return 0;
        }
        int incl = solve(nums, n+1) + nums[n];
        int excl = solve(nums, n+2) + 0;
        
        return max(incl, excl);
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1, -1);
        
        vector<int> first, second;
        
        for(int i = 0; i<n; i++){
            if(i != 0){
                second.push_back(nums[i]);
            }
            if(i != n-1){
                first.push_back(nums[i]);
            }
        }
        
        int ans = max(solve(first, n), solve(second, n));
        return ans;
    }
};

*/
