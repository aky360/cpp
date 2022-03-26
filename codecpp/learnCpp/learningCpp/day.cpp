#include<iostream>
using namespace std; 
   int main(){
    int month;
    cout<<"Enter a month: ";
    cin >>month;
    switch(month){
    case 1:
      cout<<"January"<<"\n";
      cout<<"31 days"<<"\n";
      cout<<"Winter season";
      break;
    case 2:
      cout<<"February"<<"\n";
      cout<<"28 days"<<"\n";
      cout<<"spring season";
      break;
    case 3:
      cout<<"March"<<"\n";
      cout<<"31 days"<<"\n"; 
      cout<<"summer season";
      break;
    case 4:
      cout<<"April"<<"\n";
      cout<<"30 days"<<"\n";
      cout<<"summer season";
      break;
    case 5:
      cout<<"May"<<"\n";
      cout<<"31 days"<<"\n";
      cout<<"summer season";
      break;
      case 6:
      cout<<"June"<<"\n";
      cout<<"30 days"<<"\n";
      cout<<"summer season";
      break;
    case 7:
      cout<<"july"<<"\n";
      cout<<"31 days"<<"\n";
      cout<<"rainy season";
      break;
    case 8:
      cout<<"August"<<"\n";
      cout<<"31 days"<<"\n"; 
      cout<<"rainy season";
      break;
    case 9:
      cout<<"September"<<"\n";
      cout<<"30 days"<<"\n";
      cout<<"autumn season";
      break;
    case 10:
      cout<<"October"<<"\n";
      cout<<"31 days"<<"\n";
      cout<<"Winter season";
      break;
    case 11:
      cout<<"November"<<"\n";
      cout<<"30 days"<<"\n";
      cout<<"Winter season";
      break;
    case 12:
      cout<<"December"<<"\n";
      cout<<"31 days"<<"\n";
      cout<<"Winter season";
      break;
      
    }
    return 0;
}