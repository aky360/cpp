#include<iostream>
using namespace std;

int getSum(int *arr, int n) {

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += arr[i];
    } 
    return sum;
}


int main() {

    int n;
    cin >> n;
    
    //variable size array  OR DYNAMIC ARRAY CREATIONS IN HEAP MEMORY
    int* arr = new int[n];

    //takign inputn in aray
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);

    cout << "answer is "<< ans << endl;

//case 1 where it creates infinite, new int type space in stack memory at every iteration UNTIL THE STACK OVERFLOWS.
    while(true) {
        int i = 5;
    }

    
//case 2 where it creates infinite, new dynamic allocation memory at every iteraton in heap until the heap overflows.
    while(true) {
        int* ptr = new int;
    }

    return 0;
}
