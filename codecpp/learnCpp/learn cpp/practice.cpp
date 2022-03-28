// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int* func(int* arr, int size){
    arr[0] = 5;
    arr[1] = 1;
    cout<<arr[0]<<endl;
    return arr;
}

void print(int* arr, int n){
    for(int i = 0;i<n;i++){
        cout<<*(arr+1)<<endl;
        cout<<arr[i]<<endl;
    }
}

int main() {
    // Write C++ code here
    int arr[] = {9,8,7,6,2,3};
    int n = 6;
    
    func(arr, n);
    print(arr, n);
    return 0;
}
