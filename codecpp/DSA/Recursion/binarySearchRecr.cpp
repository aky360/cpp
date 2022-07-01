#include <iostream>
#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

int binarySearch(int *arr, int k, int s, int e){
    
    if(e>=s){
        int mid = s+(e-s)/2;
        if(arr[mid] == k){
            return mid;
        }
        if(arr[mid] > k){
            binarySearch(arr, k, s, mid-1);
        }
        return binarySearch(arr, k, mid+1, e);
    }
    return -1;
}

void printArr(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main() {
    // Write C++ code here
    int arr[] = {2,4,5,6,7,8,9};
    
    int arr2[] = {2,4,5,6,7,8,9,10};
    
    cout<<binarySearch(arr,9,0,6)<<endl;
    cout<<binarySearch(arr2,10,0,7)<<endl;

    return 0;
}
