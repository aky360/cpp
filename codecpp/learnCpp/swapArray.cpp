// Online C++ compiler to run C++ program online

#include<bits/stdc++.h>
using namespace std;
int *fun(int a[], int b);
int main() {
    // Write C++ code here
    int arr[9] = {0, 1, 2, 0, 1, 0, 1, 2, 0};
    int ar[] = {1,2,3,4,5,6};
    int a[] = {4,5,6,7,8,9};
    int* ptr = fun(arr, 9);
    for ( int i = 0; i < 9; i++ ) {
      //cout << "*(p + " << i << ") : ";
      cout << *(ptr + i) << endl;
   }
    return 0;
}

int func(int a1[], int n){
    int low = 0, high = n-1;
    int temp = 0;
    for(int i=0;i<Math.abs(n/2); i++){
        if(a1[i]<0){
            a1[low] = 
        }
    }
}

/*int func(int a1[], int a2[], int m, int n){
    int low = 0, high = m-1;
    int arrS1 = sizeof(a1)/sizeof(a1[0]);
    int arrS2 = sizeof(a2)/sizeof(a2[0]);
    for(int i=0;i<arrS1; i++){
        while(a1[i]<arrS2){
            if(a1[i]<0){
                
            }
        }
    }
    while(){
       switch(a[mid]){
           case 0:
               
               break;
               
           case 1:
              
               break;
               
           case 2:
               
               break;
       }
   }
}*/


void swap(int a,int b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


int* fun(int a[], int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    
   while(mid <= high){
       switch(a[mid]){
           case 0:
               swap(&a[low],&a[mid]);
               low++;
               mid++;
               break;
               
           case 1:
               mid++;
               break;
               
           case 2:
               swap(&a[mid],&a[high]);
               high--;
               break;
       }
   }
    return a;
}