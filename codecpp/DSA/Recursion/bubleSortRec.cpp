#include<iostream>
using namespace std; 

void bubbleSort(int *arr, int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
}

void print(int *arr, int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

void bubbleSortRec(int *arr, int n){
	if(n==0||n==1){
		return ;
	}
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			swap(arr[i], arr[i+1]);
		}
	}
	bubbleSortRec(arr,n-1);
}

int main(){
	int arr[] = {2, 5, 3, 6, 1, 7, 4};
	int arr2[] = {2, 5, 3, 6, 1, 7, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int m = sizeof(arr2)/sizeof(arr2[0]);
	cout<<"before arr sort ";
	print(arr, n);
	cout<<endl; 
	bubbleSort(arr, n);
	cout<<"after arr sort ";
	print(arr, n);

	cout<<endl<<endl;

	cout<<"before arr2 sort ";
	print(arr2, m);
	cout<<endl;
	bubbleSortRec(arr2,m);
	cout<<"after arr2 sort ";
	print(arr2, m);
	
	return 0;
}
