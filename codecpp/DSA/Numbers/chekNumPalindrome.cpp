#include <bits/stdc++.h>
using namespace std;

// Function to check Palindrome;
// This can be another program to reverse a number from line 9 to 15;

bool checkPalindrome(int n){
    
	int reverse = 0;
	int temp = n;
	
	while (temp != 0) {
		reverse = (reverse * 10) + (temp % 10);
		temp = temp / 10;
	}
	
	return (reverse	== n); // if it is true then it will return 1;
	// else if false it will return 0;
}


int main(){
    
	int n = 7007;
	if (checkPalindrome(n) == 1) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	return 0;
	
}
