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

int findMinn(int arr[], int s, int e){
    int mini = INT_MIN;
    for(int i=0;i<e;i++){
        mini = min(arr[i], arr[i+1]);
    }
    return mini;
}

void sortTwoArr(int *arr1, int* arr2, int n, int m){
    //int* arr3 = new int[n+m];
    vector<int> vec;
    int mini = INT_MIN;
    
    for(int i=0;i<n;i++){
        mini = findMinn(arr1+1,i,n);
        for(int j=0;j<m;j++){
            if(mini>arr2[j]){
                vec.push_back(arr2[j]);
            }
        }
    }
    
}


void printV(vector<int> vec){
    for(vector<int>::iterator itr= vec.begin();itr!=vec.end();itr++){
        cout<<*itr<<" ";
    }
}
// Driver program
int main()
{
    int A[] = {10, 15, 25};
    int B[] = {5, 20, 30};
    int n = sizeof(A)/sizeof(A[0]);
    int m = sizeof(B)/sizeof(B[0]);
    retAllSortArr(A, B, n, m);
    return 0;
}
