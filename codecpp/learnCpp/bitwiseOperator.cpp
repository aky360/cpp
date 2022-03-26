#include<bits/stdc++.h>

using namespace std;

int main(){

	int a = 4;
	int b = 6;

	int n =10;

	cout <<" a&b "<<(a&b)<< endl;
	cout <<" a|b "<<(a|b)<< endl;
	cout <<" ~a "<<(~a)<< endl;
	cout <<" a^b "<<(a^b)<< endl;


	// left shift

	cout<<(17>>1)<<endl;
	cout<<(17>>2)<<endl;
	cout<<(19<<1)<<endl;
	cout<<(21<<2)<<endl;

	
	int x = 0;
	int y = 1;

	cout << x<<" "<<y<<" "<<endl;

	for(int i = 1;i<=n; i++){

		int nextNumber = x+y;

		cout<<nextNumber<<" ";
		x = y;
		y = nextNumber;
	}
	
}