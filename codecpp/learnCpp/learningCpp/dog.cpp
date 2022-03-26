#include<iostream>
#include<string>
//#include<conio.h>
using namespace std;
void end(int n);
/*void test(char n){
	if(n=='a'|| n=='e'|| n=='o'|| n=='o'|| n=='u'){
		cout<<"This is a vowel  ";
	 }
	else if(n=='A'|| n=='E'|| n=='O'|| n=='U'|| n=='I'){
		cout<<"This is a vowel ";
	}
	else{
		cout<<"This is a counsonent ";
	}
}

int main(){
	char n;
	cout<<"Enter an alphabet: ";
	cin>>n;
	test(n);
	return 0;
}*/
/*#include <iostream>
using namespace std;

class MyClass {         // The class
  public:               // Access specifier
    void myMethod(void);
};
void MyClass::myMethod(){
	cout<<"Hello World!";
};
int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}*/


/*class Animal {
	public:
		string Name;
		int Age;
		int i;
		void get();
		void we();

};
void Animal::get(){
	cout<<"Name= ";
	cin>>Name;
	if(Name=="sahil"||Name=="dheeraj"||Name=="arvind"){
		cout<<"really "<<Name<<" is dog "<<endl;
	}
	else if(Name=="neeraj"||Name=="Neeraj"){
		cout<<Name<<" kutta hi hai "<<endl;
	}
	else{
		cout<<" "<<endl;
	}
	cout<<"Age= ";
	cin>>Age;
	if(Age>=20){
		cout<<"Invalid Age "<<Age<<endl;
	}

}
void Animal::we(){
	cout<<"press any number to exit: ";
	cin>>i;
	if(i==0||i==1||i==2||i==3||i==4||i==5||i==6||i==8||i==7||i==9){
		cout<<"now you exit"<<endl;
	}
}
int main(){
	cout<<"|_______________|welcome|________________|"<<endl;
	cout<<"    fill your dog name don't your name"<<endl;
   Animal myObj,tuy,obj,er;
	myObj.get();
	obj.get();
	er.get();
	tuy.we();
	//cout<<w.we();
	//getch();
	return 0;
}
/*int main(){
	int n;
	cout<<"Enter number";
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=i;j>0;j--){
			cout<<"|-|";
		}
		cout<<endl;
    }
    for(int i=n+1;i>0;i--){
		for(int j=i;j>0;j--){
			cout<<"|-|";
		}
	cout<<endl;
    }
   
	return 0;
}*/
int ias(int arr[],int n,int h){
	for(int it=0;it<n;it++){
		if(arr[it]==h){
			return it;
		}
	}
	return 1;
}
int main(){
	int e;
	int n;
	//int nr;
	cout<<"Enter element";
	cin>>n;
	cout<<"Enter number";
	cin>>e;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<ias(arr,n,e)<<endl;
	end(n);
	return 0;
}
void end(int n){
	cout<<"Enter number to exit";
	cin>>n;
}
/*class python {
	private:
		string n;
		int age;
		int snake(int age,string n);
};
int python::snake(int a,string na){
	
	cout<<endl;
	return age;
}
int main(){
	string n;
	int age;
	cout<<"Enter your message to god ";
	cin>>n;
	cout<<"Enter age ";
	cin>>age ;
	python ob;
	ob.snake(age,n);
	return 0;
}*/