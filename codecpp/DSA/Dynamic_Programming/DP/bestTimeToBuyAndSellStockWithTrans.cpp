/**
You are given an array prices where prices[i] is the price of a given stock on the
ith day, and an integer fee representing a transaction fee.
Find the maximum profit you can achieve. You may complete as many transactions as you
like, but you need to pay the transaction fee for each transaction.
Note: You may not engage in multiple transactions simultaneously (i.e., you must sell
the stock before you buy again).
Example 1:
Input: prices = [1,3,2,8,4,9], fee = 2
Output: 8
Explanation: The maximum profit can be achieved by:
- Buying at prices[0] = 1
- Selling at prices[3] = 8
- Buying at prices[4] = 4
- Selling at prices[5] = 9
The total profit is ((8 - 1) - 2) + ((9 - 4) - 2) = 8.
*/
#include<bits/stdc++.h>
using namespace std;

int calculateans(vector < int > & price, int buyorsell, int index, vector < vector < int >> &dp, int fee) {
    if (index == price.size()) {
        return 0;
    }
    if (dp[index][buyorsell] != -1) {
        return dp[index][buyorsell];
    }
    if (buyorsell) {
        int ans = max(-price[index] + calculateans(price, !buyorsell, index + 1, dp, fee), calculateans(price, buyorsell, index + 1, dp, fee));
        return dp[index][buyorsell] = ans;
    } else {
        int ans1 = max(price[index] - fee + calculateans(price, !buyorsell, index + 1, dp, fee), calculateans(price, buyorsell, index + 1, dp, fee));
        return dp[index][buyorsell] = ans1;
    }
}

int tabulation(vector < int > & price, int fee) {
    int n = price.size();
    // vector<vector<int>>dp(n+1,vector<int>(2,0));
    // space optimization
    vector < int > ahead(2, 0);
    vector < int > curr(2, 0);
    for (int index = n - 1; index >= 0; index--) {
        for (int buyorsell = 0; buyorsell <= 1; buyorsell++) {
            if (buyorsell) {
                int ans = max(-price[index] + ahead[!buyorsell], ahead[buyorsell]);
                curr[buyorsell] = ans;
            } else {
                int ans1 = max(price[index] - fee + ahead[!buyorsell], ahead[buyorsell]);
                curr[buyorsell] = ans1;
            }
        }
        ahead = curr;
    }
    return curr[1];
}

int main() {
    int n;
    cin >> n;
    vector < int > input(n);
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }
    int fee;
    cin >> fee;
    int ans = calculateans(input, 1, 0, vector < vector < int >> (n + 1, vector < int > (2, -1)), fee);
    cout << ans << endl;
    int ans1 = tabulation(input, fee);
    cout << ans1 << endl;
}

/*
In recursion +memoization
time complexity: O(n*2);
space complexity: O(n*2)+ recursion stack;
In tabulation
time complexity: O(n*2);
space complexity: O(2);
*/
