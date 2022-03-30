// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


int findMin(int* arr, int s, int e){
    if(e==1){
        return arr[0];
    }
    else{
        return min(arr[0],findMin(arr+1, s+1, e-1));
    }
}


int findMax(int* arr, int s, int e){
    if(e==1){
        return arr[0];
    }
    else{
        return max(arr[0],findMax(arr+1, s+1, e-1));
    }
}


int findMinn(int* arr, int s, int e){
    return (e == 1) ? arr[0] : min(arr[0], findMinn(arr + 1, s+1, e-1));
}

int findMaxx(int* arr, int s, int e){
    return (e == 1) ? arr[0] : max(arr[0], findMaxx(arr + 1, s+1, e-1));
}


int main() {
    // Write C++ code here
     int arr[] = {2,3,4,5,6,7,8,9,1};
     
     cout<<"min "<<findMin(arr, 0, 9)<<endl;
     cout<<"max "<<findMax(arr, 0, 9)<<endl;
     cout<<endl;
     cout<<"minn "<<findMinn(arr, 0, 9)<<endl;
     cout<<"mixx "<<findMaxx(arr, 0, 9)<<endl;

    return 0;
}
