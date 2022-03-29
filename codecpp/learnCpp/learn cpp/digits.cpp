// C++ program to print all palindromic partitions of a given string
#include<bits/stdc++.h>
using namespace std;


bool oneDigit(int *num){
    if(*num < 0){
        cout<<"the number is greater than 0 "<<endl;
        return true;
    }
    else if(*num >= 0 && (*num)/10 > 10){
        cout<<(*num)/10<<"the number is greater than 0 and single number "<<endl;
        return true;
    }
    else{
        return false;
    }
    return false;
}

// Driver program
int main(){
    string str = "nitin";
    int a = 123;
    cout<<oneDigit(&a)<<endl;
    
    return 0;
}
