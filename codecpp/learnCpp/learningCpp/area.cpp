#include<iostream>
//#include<conio.h>
#include<math.h>
using namespace std;

	
int main()
{  
	int a, b, c, s, area;
	cout<<"Enter 1st number: ";
    cin>>a; 
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of triangle: "<<area;
    return area;
}
 
  	
