#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size){
	//base case
	if(size == 0||size==1){
		return true;
	}
	if(arr[0] > arr[1])
		return false;
	else{
		return isSorted(arr+1, size-1);
	}
}


int findSumWithRecursion(int *arr, int size){
	//int sum = 0;
	if(size=0){
		return 0;
	}
	if(size==1){
		return arr[0];
	}
	
	/*int remainingPart = findSumWithRecursion(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum;
		//sum = sum+arr[0];*/
	return arr[0] + findSumWithRecursion(arr+1, size-1);
}


int main(){
	 int arr[5] = {2,4,9,5,9};
    int size = 5;

    bool ans = isSorted(arr, size);
    if(ans){
        cout << "Array is sorted " << endl;
    }
    else {
        cout << "Array is not sorted " << endl;
    }

    cout<<endl;
    cout<<endl;

    cout<<"the print line "<<endl;

    cout<<"the sum of array is "<<endl;
    int sums = findSumWithRecursion(arr, size);
    cout<<"sum of array is " << sums<<endl;

    return 0;
}
