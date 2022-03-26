#include <bits/stdc++.h>

using namespace std;


int findUniqueElement(int *arr, int n){
	int ans = 0;
	for(int i=0;i<n;i++){
		ans = ans^arr[i];
	}
	return ans;
}

int main() {
    // Write C++ code here
    int arr[] = {1,2,2,4,5,1,4,5,6};
    cout<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findUniqueElement(arr, n);

    return 0;
}