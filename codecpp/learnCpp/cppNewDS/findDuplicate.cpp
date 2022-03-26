#include <bits/stdc++.h>

using namespace std;


int findDuplicate(int *arr, int n){
	int ans = 0;

	for(int i=0; i<n;i++){
		ans = ans^arr[i];
	}

	for(int i=1; i<n;i++){
		ans = ans^i;
	}
	return ans;
}


int findDuplicates(vector<int> &arr){
	int ans = 0;

	for(int i=0; i<arr.size();i++){
		ans = ans^arr[i];
	}

	for(int i=1; i<arr.size();i++){
		ans = ans^i;
	}
	return ans;
}


int main() {
    // Write C++ code here
    int arr[] = {1,2,2,4,5};
    cout<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    cout<<endl<<endl;
    //cout<<findDuplicate(arr, n);
    cout<<findDuplicates(arr);

    return 0;
}