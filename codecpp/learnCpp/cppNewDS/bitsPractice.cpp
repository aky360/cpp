#include <bits/stdc++.h>
using namespace std;


void printBinary(int n){
	for(int i=10;i>=0;--i){
		cout<<((n>>i)&1);
	}
	cout<<endl;
}

void playBits(){
	cout<<INT_MAX<<endl;
	int a = (1<<4);   // left shift tells the 2 power 4 if n instead of 4 then it calculate the power of n on 2
	cout<<"2 power n is "<<a<<endl;
	int b = (1ll<<31)-1;
	 cout<<"2 power 32 is stack overflow memory because it is signed "<<b<<endl;

	 unsigned int c = (1ll<<32)-1;
	 cout<<"2 power 32 is "<<c<<endl;
}


int main(){
	cout<<endl;
	printBinary(9);
	int x = 9;
	int i = 3;
	if((x&(1<<i)) != 0){
		cout<<"set bit"<<endl;
	}
	else{
		cout<<"not bit set"<<endl;
	}
	//bit set
	printBinary(x | (1<<1));

	cout<<endl;
	//not 
	printBinary(~x);
	cout<<endl;
	//left shift at 3rd
	printBinary((1<<3));
	//bit unset
	printBinary(x&(~(1<<3)));
	//bit toggle
	printBinary(x^(1<<2));
	playBits();
	return 0;
}