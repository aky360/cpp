#include<iostream>
using namespace std;
void start(int n){
 for(int i=0;i<n;i++){
 	for(int j=0;j<i;j++){
    cout << "* ";
    }
	cout << endl;
	}
}
void sahil(int n) {
	for (int i=n; i>0; i--){
	   for (int j=i; j>0; j--){
			cout<<"* ";
		}
		cout << "\n";
	    }
}
int main(){
	int n;
	cout<<"Enter number   \n";
	cin>>n;
	start(n);
	sahil(n);
   return 0;
}




/*#include<iostream>
#include<conio.h>
using namespace std;

void PyramidPattern1(int n) {
  for (int i = 1; i <= n; i++) {
    for (int k = n - i; k > 0; k--) {
      cout << "";
    }
    for (int j = 1; j <= i; j++) {
      cout << " *";
    }
    cout << endl;
  }
}
void PyramidPattern2(int n) {
  for (int i = n; i >= 1; i--) {
    for (int k = n - i; k > 0; k--) {
      cout << "";
    }
    for (int j = i; j > 0; j--) {
      cout << " *";
    }
    cout << endl;
  }
}

int main() {
  int num;
  cout << "Enter number:" << endl;
  cin >> num;
  PyramidPattern1(num);
  
  PyramidPattern2(num);
  getch();

  return 0;
}/*/