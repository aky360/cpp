#include<iostream>
using namespace std;
void start();
int main(){
	int n;
	cout<<"Enter number";
	cin>>n;
	start();
   return 0;
}
void start(int n){
 for(int i=1;i<=n;i++){
 	for(int j=n-1;j<=i;j++){
    cout << "*";
    }
      cout << "\n";
    }
 }