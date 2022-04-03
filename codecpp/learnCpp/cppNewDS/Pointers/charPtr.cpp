#include<iostream>
using namespace std;

void print(int *ptr){
	cout<<ptr<<endl;
}


void update(int *ptr){
	ptr = ptr +1;        //we can't change the actual address of pointer referencing to address.
	cout<<ptr<<endl;
}

void update1(int *ptr){
	*ptr = *ptr + 1;     // but we can change the actual address of pointer referencing to value;
	cout<<*ptr<<endl;
}

int getSum(int arr[], int n){                   // here arr[] is in function is actually is *arr
	cout<<"size of arr is "<<sizeof(arr)<<endl;
	cout<<"this is because the actual game is when we pass the arr[] in function it takes the *arr first reference address(arr) which is 8 bytes because the address in 8 bytes so arr size is 8 bytes "<<endl;

	int sum = 0;
	for(int i=0;i<n;i++){
		sum = sum + arr[i];
	}

	return sum;
}


int main(){

	int arr[5] = {1,2,3,4,5};
	char ch[6] = "abcde";

	cout<<"arr "<<arr<<endl;
	cout<<"ch "<<ch<<endl;

	char* c = &ch[0];
	cout<<"c "<<c<<endl;   //prints the entire string;

	char temp = 'z';
	char *p = &temp;

	cout<<p<<endl;

	int value = 5;
	int* ptr = &value;

	cout<<"before ptr address = ";
	print(ptr);
	cout<<"after update ptr address ";

	//we can't update address of pointer using function like update() function in this case;
	update(ptr);       

	cout<<"first of all, value of *ptr "<<*ptr<<endl;

	cout<<"value after update1() *ptr value "<<endl;

	//but we can update the value at pointer address (actual value); 	
	update1(ptr);

	cout<<"at the end ptr address = "<<ptr<<endl;
	cout<<"at the end ptr value "<<*ptr<<endl;

	int arx[6] = {1,2,3,4,5,8};

	cout<<"sum is "<<endl<<getSum(arx,6)<<endl;

	return 0;
}
