// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

void swapAlternate(int *arr, int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main() {
    // Write C++ code here
    int arr[] = {1,2,3,4,5};
    int arr1[] = {1,2,3,4,5,6};
    
    swapAlternate(arr, 5);
    cout<<endl;
    swapAlternate(arr1, 6);

    return 0;
}