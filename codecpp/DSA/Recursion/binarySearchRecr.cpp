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
//Time Complexity: O(log n)
//Auxiliary Space: O(log n)


void printArr(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



//Iterative implementation of Binary Search 
int binarySearch(int *arr, int x,  int l, int r){
    while(l<=r){
        int m = l + (r - l) / 2;
        if(arr[m] == x){
            return m;
        }
        if(arr[m] < x){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return -1;
}
//Time Complexity: O(log n)
//Auxiliary Space: O(1)


//leetcode solution binary search algorithm
class Solution {
public:
    
    int binarySearch(vector<int>& nums, int target){
        int start = 0;
        int end = nums.size()-1;
        
        while(start<=end){
            int mid = start+(end-start)/2;
            if(target == nums[mid]){
                return mid;
            }
            if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int ans = binarySearch(nums, target);
        return ans;
    }
};



int main() {
    // Write C++ code here
    int arr[] = {2,4,5,6,7,8,9};
    
    int arr2[] = {2,4,5,6,7,8,9,10};
    
    cout<<binarySearch(arr,9,0,6)<<endl;
    cout<<binarySearch(arr2,10,0,7)<<endl;

    return 0;
}
