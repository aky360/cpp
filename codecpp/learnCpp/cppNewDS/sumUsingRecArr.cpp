#include<iostream>
using namespace std;

int getSum(int *arr, int size) {

    //base case
    if(size == 0) {
        return 0;
    }
    if(size == 1 )
    {
        return arr[0];
    }

    //int remainingPart = getSum(arr+1, size-1);
    //int sum = arr[0] + remainingPart;
    //return sum;
    return arr[0] + getSum(arr+1, size-1);
}

void print(int arr[], int n) {
    cout << "Size of array is " << n << endl;

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

}

bool lnrSrchRecursion(int *arr, int size, int val){
    print(arr, size);
    if(size == 0){
        return false;
    }
    if(val == arr[0]){
        return true;
    }
    else{
        return lnrSrchRecursion(arr+1, size-1, val);
    }
}


int main() {

    int arr[5] = {2,4,9,9,9};
    int size = 5;
    int val = 6;

    int sum = getSum(arr, size);

    cout << "Sum is " << sum << endl;

    cout<<endl;

    bool ans = lnrSrchRecursion(arr, size, val);
    if(ans){
        cout<<"found "<<endl;
    }
    else{
        cout<<"not found "<<endl;
    }

    return 0;
}