#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class yaahoo{
 public:
 	int x;
 	float yr;
 	double yt;
 	double y();
 	double z();
 	void end();
};
double yaahoo::y(){
	cout<<"\n                                            find the squareroot of\n ";
	cin>>x;
	yr=sqrt(x);
	cout<<" "<<x<<" = "<<yr;
	return yr;
}
double yaahoo::z(){
	cout<<"\n                                                find the square of\n ";
	cin>>x;
	yt=x*x;
	cout<<" "<<x<<" = "<<yt;
	return yt;
}
void yaahoo::end(){
	cout<<endl;
	cin>>x;
}
int main(){
	string ta;
	cout<<" \n\n\n\n                 \n       ---------------------------------------welcome--------------------------------------------------\n";
	yaahoo t;
	for(int r=0;r<1;r++){
		t.y();
		t.z();
	}
	cout<<"   \n                    ---------------------------------------Bye Bye----------------------------------------------------\n";
	//t.end();
	cin>>ta;
	if(ta=="bye"){
		cout<<"  \n                      ---------------------------------------Take care----------------------------------------------\n";
		cout<<"\n                        ---------------------------------------Good Morning---------------------------------------------\n";

	}
	getch();
	return 0;
}