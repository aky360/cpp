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
 for(int i=0;i<n;i++){
 	for(int j=0;j<n;j++){
    cout << "*";
    }
      cout << "\n";
    }
 }