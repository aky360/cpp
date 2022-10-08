/*
Given two strings text1 and text2, return the length of their longest common
subsequence. If there is no common subsequence, return 0.
A subsequence of a string is a new string generated from the original string with
some characters (can be none) deleted without changing the relative order of the
remaining characters.
For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings.
Example 1:
Input: text1 = "abcde", text2 = "ace"
Output: 3
Explanation: The longest common subsequence is "ace" and its length is 3.
*/
#include <bits/stdc++.h>
using namespace std;

int recursiveLcs(string input1, string input2, int n, int m, vector < vector < int >> & dp) {
    if (n < 0 || m < 0)
        return 0;
    if (dp[n][m] != -1)
        return dp[n][m];
    if (input1[n] == input2[m])
        return dp[n][m] = 1 + recursiveLcs(input1, input2, n - 1, m - 1, dp);
    else
        return dp[n][m] = max(recursiveLcs(input1, input2, n - 1, m, dp), recursiveLcs(input1, input2, n, m - 1, dp));
}
int tabulationLcs(string input1, string input2) {
    int n = input1.length();
    int m = input2.length();
    vector < vector < int >> dp(n + 1, vector < int > (m + 1, 0));
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= m; i++) {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (input1[i - 1] == input2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m];
}
int main() {
    string input1, input2;
    cin >> input1 >> input2;
    vector < vector < int >> dp(input1.length() + 1, vector < int > (input2.length() + 1, -1));
    int ans1 = recursiveLcs(input1, input2, input1.size() - 1, input2.size() - 1, dp);
    cout << ans1 << endl;
    int ans2 = tabulationLcs(input1, input2);
    cout << ans2 << endl;
}
