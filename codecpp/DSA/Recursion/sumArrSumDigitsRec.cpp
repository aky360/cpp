#include<iostream>

using namespace std; 


int sum(int n, int arr[]){
	if(n<0) return 0;
	return sum(n-1, arr) + arr[n];
}

int getSum(int arr[], int size) {

    if(size == 0) return 0;
    if(size == 1 ) return arr[0];

    return arr[0] + getSum(arr+1, size-1);
}

int digitSum(int n){
	if(n==0){
		return 0;
	}
	int last_digit = n % 10;
	n = n/10;

	return last_digit + digitSum(n);
}

int digit_Sum(int n){
	if(n==0) return 0;  ////n = n/10 + last_digit;
	return digit_Sum(n/10) + (n%10); //e.i.  digit_sum(n) = digit_sum(n/10) + last_digit;
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"sum of array is "<<sum(n-1, arr)<<endl;

	cout<<"getSum of array is "<<getSum(arr, n)<<endl;

	cout<<"sum of digitSum is " <<digitSum(12345)<<endl;

	cout<<"sum of digit_Sum is " <<digit_Sum(123456789)<<endl;
	return 0;
}
