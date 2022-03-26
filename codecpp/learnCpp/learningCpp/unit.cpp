#include <iostream>
#include<conio.h>
using namespace std;
void print();
/*class unit{
	public:
		float cm,exit;
		int n;
		double cim();
		double fert();
		double ert();
		double fers(); 
		double feet();
		void end();
};
double unit::cim(){

	cout<<"\ncm to m \n";
	cin>>cm;
	cout<<cm/100<<" m";
	return cm;
}
double unit::fert(){
	cout<<"\nm to cm\n";
	cin>>cm;
	cout<<cm*100<<"cm";
	return cm;
}
void unit::end(){
	cout<<"\nEnter a number to exit\n ";
	cin>>exit;
}
double unit::ert(){
	cout<<"\nkm to m\n";
	cin>>cm;
	cout<<cm*1000<<"m";
	return cm;
}
double unit::fers(){
	cout<<"\ncm to km\n";
	cin>>cm;
	cout<<cm/100000<<"Km";
	return cm;
}
double unit::feet(){
	cout<<"\nfeet to inch\n";
	cin>>cm;
	cout<<cm*12<<"inch";
	return cm;
}

int main(){
	cout<<"'||'____________________'||'____________________________welcome___________________________'||'____________________________welcome___________________________'||'____________________________________'||'";
	unit out;
	for(int i=0; i<2; i++){
		out.cim();
		out.ert(); 
		out.fers(); 
		out.feet();
	}	
	out.end();
	return 0;
}*/
/**int main(){
	int n1,n2,max;
	cout<<"\n\n\n\n\n\n\n\n'||'____________________'||'____________________________welcome___________________________'||'____________________________welcome___________________________'||'____________________________________'||'\n";

	cout<<"Enter a number";
	cin>>n1;
	cout<<"Enter a number";
	cin>>n2;
	max=(n1>n2)?n1:n2;
	do{
		if(max%n1==0 && max%n2==0){
			cout<<"LCM = "<<max;
			break;
		}
		else 
			++max;
	}
	while(true);
	cout<<"\n";
	print();
	return 0;

}
void print(){
	int n;
	cin>>n;
}*/
int main(){
	int a,b,c,d;
	char f;
	//cout<<"Enter a number: ";
	cin>>a>>f>>b;
	//cout<<"Enter oprater\n";
	//cout<<"*\n"<<"/\n"<<"-\n"<<"+\n"<<"%\n";
	//cin>>f;
	//cout<<"Enter second number: ";
	//cin>>b;
	if(f=='+'){
		cout<<"Your answer: "<<a+b;
	}
	else if(f=='*'){
		cout<<"Your answer: "<<a*b;
	}
	else if (f=='-'){
		cout<<"Your answer: "<<a-b;
	}
	else if(f=='%'){
		cout<<"Your answer: "<<a%b;
	}
	else if(f=='/'){
		cout<<"Your answer: "<<a/b;
	}
	else{
	cout<<"invalid  ";
	}
	getch();
	return 0;
}
