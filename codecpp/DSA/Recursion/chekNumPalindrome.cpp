// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

#include <iostream>
using namespace std;


int oneDigit(int num){
  return (num >= 0 && num < 10);
}


bool isPalUtil(int num, int* dupNum){

  if (oneDigit(num))
    return (num == (*dupNum) % 10);

    // if(num >= 0 && num < 10){
    //     return (num == (*dupNum) % 10);
    // }

  // This is the key line in this
  // method. Note that all
  // recursive calls have a separate
  // copy of num, but they
  // all share same copy of *dupNum.
  // We divide num while
  // moving up the recursion tree
  cout<<"num "<<num<<" dupNum "<<dupNum<<" *dupNum "<<*dupNum<<endl;
  if (!isPalUtil(num / 10, dupNum)){
      cout<<"nums "<<num<<" dupNum "<<dupNum<<" *dupNum "<<*dupNum<<endl;
    return false;
  }

    cout<<"nums "<<num<<" dupNum "<<dupNum<<" *dupNum "<<*dupNum<<endl;
    
  // The following statements are
  // executed when we move up
  // the recursion call tree
  *dupNum /= 10;
  
  cout<<" *dupNum "<<*dupNum<<endl;
  
  cout<<" num % 10 , (*dupNum) % 10 ==>  "<<num % 10 <<" "<<(*dupNum) % 10<<endl;
  
  cout<<"(num % 10 == (*dupNum) % 10) ==>  "<<(num % 10 == (*dupNum) % 10)<<endl;

  // At this point, if num%10 contains
  // i'th digit from
  // beginning, then (*dupNum)%10
  // contains i'th digit
  // from end
  return (num % 10 == (*dupNum) % 10);
}


int isPal(int num){
  if (num < 0)
    num = -num;

  // Create a separate copy of num,
  // so that modifications
  // made to address dupNum don't
  // change the input number.
  // *dupNum = num
  int* dupNum = new int(num);

  return isPalUtil(num, dupNum);
}



int main(){
    
    int* dupNums = new int(20);     //create the copy of the pointer of int at run type of value 
    int arr[] = {1,2,23,34,5,5,6};
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*dupNums<<endl;
    int size = *(&dupNums + 1) - dupNums;
    cout<<"size " <<size<<endl;
    cout<<"*dupNums "<< *dupNums<<" &dupNums "<<&dupNums<<endl;
    for(int i=1;i<20;i++){
        cout<<" values at different location "<<*(dupNums+i)<<endl;
        cout<<*dupNums+i<<endl;
        //cout<<&(*dupNums+i)<<endl;
    }
    
  int n = 12321;
  isPal(n) ? cout <<"Yes\n": cout <<"No" << endl;
  
  n = 12;
    isPal(n) ? cout <<"Yes\n": cout <<"No" << endl;
 
    n = 88;
    isPal(n) ? cout <<"Yes\n": cout <<"No" << endl;
 
    n = 8999;
    isPal(n) ? cout <<"Yes\n": cout <<"No";

  return 0;
}
