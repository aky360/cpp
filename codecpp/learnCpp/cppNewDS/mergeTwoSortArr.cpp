// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int* merge(int* ar1, int m, int* ar2, int n, int* arr){
    int i=0, j=0, k = 0;
    while(i<m && i<n){
        if(ar1[i]<ar2[i])
            arr[k++] = ar1[i++];
        else
            arr[k++] = ar2[j++];
    }
    while(i < n){
        arr[k++] = ar1[i++];
    }
    while(j<m){
        arr[k++] = ar2[j++];
    }
    return arr;
}

void printArr(int* arr){
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main() {
    // Write C++ code here
    int ar1[] = {6,7,8,9,10,11,15};
    int ar2[] = {1,2,3,4,5,6,7,8};
    int arr[15];
    merge(ar1, 7, ar2, 8, arr);
    printArr(arr);

    return 0;
}
