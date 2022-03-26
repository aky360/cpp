#include<iostream>
using namespace std; 
int main(){
	/*int n;
	//cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			//cout<<j;
			cout<<"H"<<endl;
		}
	}*/
	int n;
	cout<<"Enter your age: ";
	cin>>n;
	 if(n>=150 || n==0){
		cout<<" abbe nekal kya faltu ka bakwas kar raha hai ";
	}

	 else if(n>=18){
		cout<<"tu jawan hai";
	}
	else{
		cout<<"tu bacha hai";
	}


	return 0;
}