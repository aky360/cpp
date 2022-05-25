// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int dy = 1000;  //this is global accessible


// base case
//tabulation in dynamic programming
int dp[MAXN];
int dp[0] = 1;
for (int i = 1; i< =n; i++)
{
    dp[i] = dp[i-1] * i;
}


//memoization in dynamic programming
int dp[10];
int solve(int x){
    if (x==0)
        return 1;
    if (dp[x]!=-1)
        return dp[x];
    return (dp[x] = x * solve(x-1));
}

int main() {
    // Write C++ code here
    int arr[6] = {1,2,3,4,5,6};
    int len1 = *(&arr + 1) - arr;
    memset(dp, -1, sizeof(dp));
    int len = *(&dp + 1) - dp;
    for(int i=0;i<len1;i++){
        cout<<*(arr+i)<<" ";
    }
    
    cout<<"factorial of number is "<<solve(6)<<endl;
    int a = 12; 
    int b{10};
    int c(23);
    cout << "Hello world!"<<endl;
    
    if(a>b){
        cout<<c<<endl<<b<<endl;
    }
    
    int count = 0;
    int N = 12;
    for (int i = N; i > 0; i /= 2){
        for (int j = 0; j < i; j++){
            cout<<i<<" "<<count<<endl;
            count++;
        }
        cout<<endl;
    }

    return 0;
}
