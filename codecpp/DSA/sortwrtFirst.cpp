#include<bits/stdc++.h>
using namespace std;
 
void printV(vector<int> vec);
 
void retAllSortArr(int *arr1, int* arr2, int n, int m){
    for(int i=0;i<n;i++){
        vector<int> vec;
        vec.push_back(arr1[i]);
        for(int j=0;j<m;j++){
            if(arr1[i]<arr2[j]){
                vec.push_back(arr2[j]);
            }
        }
        cout<<endl;
        printV(vec);
    }
}

void printV(vector<int> vec){
    for(vector<int>::iterator itr= vec.begin();itr!=vec.end();itr++){
        cout<<*itr<<" ";
    }
}

// Driver program
int main(){
    int A[] = {10, 15, 25};
    int B[] = {5, 20, 30};
    int n = sizeof(A)/sizeof(A[0]);
    int m = sizeof(B)/sizeof(B[0]);
    retAllSortArr(A, B, n, m);
    return 0;
}
