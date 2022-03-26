#include <iostream>
#include <string>
using namespace std;
int main(){
    /*int a,b,c,d,e,f,g,h,i,j;
    cout<<"Enter number"<<endl;
    cin>>a;
    cout<<"Enter number"<<endl;
    cin>>b;
    cout<<"Enter number"<<endl;
    cin>>c;
    cout<<"Enter number"<<endl;
    cin>>d;
    cout<<"Enter number"<<endl;
    cin>>e;
    cout<<"Enter number"<<endl;
    cin>>f;
    cout<<"Enter number"<<endl;
    cin>>g;
    cout<<"Enter number"<<endl;
    cin>>h;
    cout<<"Enter number"<<endl;
    cin>>i;
    cout<<"Enter number"<<endl;
    cin>>j;
	cout<<"sum = "<<a+b+c+d+e+f+g+h+i+j;*/
	//int marks[3] = {23,12,13};
	//for( int j=0;j<3;j++){
		//cout<<marks[j]<<endl;
	//}
	//cout<<marks<<endl;
	//string apple,samsung,realme,oppo,vevo,redmi,poco;
	int phone;
	//string arr[7] = {"apple","samsung","realme","oppo","vevo","redmi","poco"};
	//for( int j=0;j<7;j++){
		//cout<<arr[j]<<endl;
	//}
    cout<<"which phone is best: ";
    cin>>phone;
    switch(phone){
 		case 1:
 			cout<<"apple ";
 			break;
 		case 2:
 			cout<<"samsung ";
 			break;
 		case 3:
 			cout<<" 'realme' ";
 			break;
 		case 4:
 			cout<<"oppo ";
 			break;
 		case 5:
 			cout<<"vivo";
 			break;
 		case 6:
 			cout<<"redmi ";
 			break;
 		case 7:
 			cout<<"poco ";
 			break;
 		default:
 		   	cout<<"you should press 1 to 7.";

    }   
	return 0;
}