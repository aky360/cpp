#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+10;

// fibbonacci series = [0,1,1,2,3,5,8,13,.........]

int dp[N];

int fib(int n){
	if(n==0) return 0;
	if(n==1) return 1;

	return fib(n-1) + fib(n-2);
}

int fib_With_DP(int n){
	if(n==0) return 0;
	if(n==1) return 1;

	if(dp[n] != n){
		return dp[n];
	}
	else{
		cout<<dp[n]<<endl;
	}
	return dp[n] = fib_With_DP(n-1) + fib_With_DP(n-2);
}


int main(){
	memset(dp, -1, sizeof(dp));
	int x;
	cin>>x;
	cout<<fib(x)<<endl;
	int arrSize = *(&dp + 1) - dp;
	cout<<arrSize<<endl;
	//cout<<(int)sizeof(dp)/sizeof(dp[0])<<endl;
	while(--x){
		cout<<dp[x]<<endl;
		x--;
	}
	return 0;
}