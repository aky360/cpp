#include<iostream>
using namespace std;


void print(int arr[], int n) {
    cout << "Size of array is " << n << endl;

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    } cout << endl;

}

int linearSearch(int *arr, int size, int key){
	print(arr, size);
	cout << endl;
	for(int i = 0;i < size;i++){
		if(key == arr[i]){
			return i;
		}
	}
	return 0;
}

bool lnrSrchRecursion(int *arr, int size, int key){
    print(arr, size);
    cout << endl;
    if(size == 0){
        return false;
    }
    if(key == arr[0]){
        return true;
    }
    else{
        return lnrSrchRecursion(arr+1, size-1, key);
    }
}

int binarySearch_Variant(int *arr, int size, int key){
	int lo = 0;
	int hi = size;
	int mid = (lo + hi)/2;
	while(hi>mid){
	    if(key == arr[mid]){
	        return mid;
	    }
	    else{
	        if(key > arr[mid]){
	            lo = mid;
	            mid = (lo + hi)/2;
	        }
	        else if(key < arr[mid]){
	            hi = mid;
	            mid = (lo+hi)/2;
	        }
	    }
	}
	return 0;
}

int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}


int main(){
	int arr[] = {2,3,2,1,3,4,5,6,7};
	int arr1[] = {1,2,2,3,3,4,5,6,7};
	int size = sizeof(arr) / sizeof(arr[0]);

	//int sortedArr[] = sort(arr,arr+size);

	//print(sortedArr, size);

	cout<<endl;

	int key = 5;

	cout<<linearSearch(arr, size, key)<<endl;

	cout<<endl;

	bool ans = lnrSrchRecursion(arr, size, key);
    if(ans){
        cout<<"found "<<endl;
    }
    else{
        cout<<"not found "<<endl;
    }
    cout<< endl;

    cout<<"binary search "<<binarySearch(arr1, size, key)<<endl;


	return 0;
}