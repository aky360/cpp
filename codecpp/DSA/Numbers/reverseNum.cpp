#include <bits/stdc++.h>
using namespace std;

// Function to print reverse numbers;
int revNum(int num){
    
    int reverse = 0;
    int temp = num;
    
    while(temp!=0){
        reverse = (reverse * 10) + (temp %10);
        temp = temp / 10;
    }
    return reverse;
}

int main(){
    
	int n = 12345;
    cout<<revNum(n)<<endl;
	return 0;
	
}
