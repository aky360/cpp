#include <bits/stdc++.h>
using namespace std;


void printVector(vector<int> vec){
	for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){
        cout << *it<< endl;
    }
}

int printArrSize(int *arr){
	return sizeof(arr)/sizeof(arr[0]);
}

void printArrEle(int *arr){
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		cout<<*arr+1<<endl;
	}
}


void bitsCode(){
	unsigned short int data {15};

    std::cout << "data (dec) : " <<std::showbase <<  std::dec << data << std::endl;
    std::cout << "data (oct) : " <<std::showbase <<  std::oct << data << std::endl;
    std::cout << "data (hex) : " <<std::showbase <<  std::hex << data << std::endl;
    std::cout << "data (bin) : " << std::bitset<16>(data) << std::endl;
}


int main(){

	int num = 5;
	cout<<"p0inum"<<num<<endl;

	int arr1[] = {1,2,3,4,5};      //static array is created in stack memory
	int *arr = new int[5];         //dynamic array creation in heap memory so we need to delete it manually after use.otherwise it consume space in heap memory. 
	int *arr2 = new int[5];        //dynamic array creation in heap memory so we need to delete it manually after use.otherwise it consume space in heap memory.
	
	cout<<"size of arr "<<printArrSize(arr)<<endl;
	cout<<"elements of arr ";
	printArrEle(arr);

	cout<<"size of arr1 "<<printArrSize(arr1)<<endl;
	cout<<"elements of arr1 ";
	printArrEle(arr1);

	cout<<"size of arr2 "<<printArrSize(arr2)<<endl;
	cout<<"elements of arr2 ";
	printArrEle(arr2);

	vector<int> vecArr = {*arr, *arr2, *arr1};
	cout<<"size "<<vecArr.size()<<endl;
	printVector(vecArr);

	delete[] arr;                  //delete dynamic array after use from heap memory.because dynamic array takes space from heap memory.
	delete[] arr2;                 //delete dynamic array after use from heap memory.because dynamic array takes space from heap memory.
	bitsCode();

	int arx[] = {1,2,3,4,5,6,7,8,9,0};

	//arr[i] = *(arr + i);               //formula for at any index
	//i[arr] = *(i + arr);

	int i = 3;
    cout << "i[arx] is equavalent to arx[i] = "<<i[arx] <<" is equavalent to "<<arx[i]<< endl;
    cout << "*(arx + i) is equavalent to *(i + arx) = "<<*(arx + i) <<" is equavalent to "<<*(i + arx)<< endl;

    //arx[i] = *(arx + i);               //formula for at any index
	//i[arx] = *(i + arx);


	int *ptr = &arx[0];
    cout << "address of &arx[0] "<<ptr << endl;
    ptr = ptr + 1;
    cout << "address of &arx[0] after increment ++ "<<ptr << endl;

	return 0;
}
