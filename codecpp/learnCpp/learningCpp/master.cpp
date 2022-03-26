#include <iostream>
using namespace std;
double start(double n){
	cout<<"\npress any number to exit ";
	cin>>n;
	if(n==0){
	  cout<<"now you are exit "<<endl;
	}
	else {
	  cout<<"now you are exit by ";
	}
	return n;
}
int main(){
	float side,base,height,radius;
	double pie=3.141592;
	float r=0.33;
	float t=0.66;
	int volume,n;
	float e=1.33;
	char s;
	string er;	
	cout<<"____________________________________  welcome  to volume ________________________________________________"<<endl;
	cout<<"                                      find the volume of                        "<<endl;
	cout<<"1=Cube"<<endl;
	cout<<"2=cuboidal"<<endl;
	cout<<"3=Cone"<<endl;
	cout<<"4=cylinder"<<endl;
	cout<<"5=sphere"<<endl;
	cout<<"6=Hemisphere"<<endl;
	cout<<"Enter shape ";
	cin>>volume;
	
	switch(volume){
		case 1:
		cout<<"Cube"<<endl;
		 cout<<"Enter side in meter ";
		 cin>>side;
		 cout<<"volume of cube "<<side*side*side<<" m^3"<<endl;
		 cout<<"Are you find the volume of cube in litres "<<endl;
		 cin>>er;
		 if(er=="yes"||er=="Yes"){
		 	cout<<side*side*side*1000 <<" litres";
		 }
		 else if(er=="no"){
		 
		 }
		else{
			cout<<endl;
		}
		break;
		case 2:
		cout<<"cuboidal"<<endl;
		cout<<"Enter side in meter ";
		cin>>side;
		cout<<"Enter height in meter ";
		cin>>height;
		cout<<"Enter base in meter ";
		cin>>base;
		cout<<"volume of cuboidal= "<<side*base*height<<" m^3"<<endl;
		cout<<"Are you find the volume of cuboidal in litres "<<endl;
		cin>>er;
		 if(er=="yes"||er=="Yes"){
     	cout<<side*base*height*1000 <<" litres";		 
     	}
		 else if(er=="no"){
		 
		 }
		else{
			cout<<endl;
		}
		
		break;
		case 3:
		cout<<"Cone"<<endl;
		cout<<"Enter radius in meter ";
		cin>>radius;
		cout<<"Enter height in meter ";
		cin>>height;
		cout<<"volume of cone "<<r*pie*radius*radius*height<<" m^3"<<endl;
		cout<<"Are you find the volume of cone in litres "<<endl;
		 cin>>er;
		 if(er=="yes"||er=="Yes"){
		 	cout<<r*pie*radius*radius*height*1000 <<" litres";
		 }
		 else if(er=="no"){
		 
		 }
		else{
			cout<<endl;
		}
		
		break;
		case 4:
		cout<<"cylinder"<<endl;
		cout<<"Enter radius in meter ";
		cin>>radius;
		cout<<"Enter height in meter ";
		cin>>height;
		cout<<"volume of cylinder "<<pie*radius*radius*height<<" m^3"<<endl;
		cout<<"Are you find the volume of cylinder in litres "<<endl;
		 cin>>er;
		 if(er=="yes"||er=="Yes"){
		cout<<pie*radius*radius*height*1000 <<" litres";
		 }
		 else if(er=="no"){
		 
		 }
		else{
			cout<<endl;
		}
		break;
		case 5:
		cout<<"sphere"<<endl;
		cout<<"Enter radius in meter ";
		cin>>radius;
		cout<<"volume of sphere "<<e*pie*radius*radius*radius<<" m^3"<<endl;
		cout<<"Are you find the volume of sphere in litres "<<endl;
		 cin>>er;
		 if(er=="yes"||er=="Yes"){
		cout<<e*pie*radius*radius*radius*1000 <<" litres";
		 }
		 else if(er=="no"){
		 
		 }
		else{
			cout<<endl;
		}
		break;
		case 6:
		cout<<"hemi sphere"<<endl;
		cout<<"Enter radius in meter ";
		cin>>radius;
		cout<<"volume of hemi sphere "<<t*pie*radius*radius*radius<<" m^3"<<endl;
		cout<<"Are you find the volume of hemi sphere in litres "<<endl;
		 cin>>er;
		 if(er=="yes"||er=="Yes"){
		cout<<t*pie*radius*radius*radius*1000 <<" litres";
		 }
		 else if(er=="no"){
		 
		 }
		else{
			cout<<endl;
		}
		break;
		default:
		cout<<"try again"<<endl;
		break;
     }
        cout<<start(n) <<endl;
	     return 0;
}
