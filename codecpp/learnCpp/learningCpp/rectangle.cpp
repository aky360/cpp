#include<iostream>
using namespace std;
int main(){
   /*
   return 0;
}*/
/*#include<iostream>

using namespace std;

void PascalsTriangle(int n) {

  for (int i = 1; i <= n; i++) {
    int coef = 1;
    for (int k = n - i; k > 0; k--) {
      cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << coef << " ";
      coef = coef * (i - j) / j;

    }
    cout << endl;
  }
}

int main() {
  int num;
  cout << "Enter number of levels of the pattern :" << endl;
  cin >> num;
  PascalsTriangle(num);

  return 0;
}*/
  // int n;
   //cout<<"Enter number";
   //cin>>n;
   /*for(int i=1;i<=n;i++){
   	for(int j=1;j<=i;j++){
   		cout << "* ";
   	}
   	cout<<endl;
   }
	for(int i=n;i>0;i--){
   	 for(int j=i;j>0;j--){
   		cout << "* ";
   	 }
   	 cout<<endl;
   	}   */
   /*for(int i=1;i<=n;i++){
   	for(int j=i-1;j>0;j--){
   		cout<<"* ";
   	}
   	for(int k=i;k<i;k<=n++){
   		cout<<" ";
   	}
   	cout<<endl;
   }*/
   
	double base,height;
   	cout<<"Enter base: ";
   	cin>>base;
   	cout<<"Enter height: ";
  	cin>>height;
   	double area=(0.5*(height*base));
   	cout<<"area of rectangle is: "<<area;
   	return 0;
}