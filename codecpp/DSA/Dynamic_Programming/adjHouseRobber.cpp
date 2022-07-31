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
