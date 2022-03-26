#include <iostream>
using namespace std;

class Car {        
  public:     
       string x,y;
        int z;
        void printf(string x,string y,int z);    
};

void Car::printf(string x,string y,int z){
    
}
int main(){
  Car carObj1;
  string x,y;
  int z;
    cout<<"Enter brand ";
    cin>>x;
    cout<<"Enter model ";
    cin>>y;
    cout<<"Enter year ";
    cin>>z;
   
   cout << carObj1.x << " " << carObj1.y << " " << carObj1.z << "\n";
     return 0;
}
