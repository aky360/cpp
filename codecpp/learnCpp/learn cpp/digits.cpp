// C++ program to print all palindromic partitions of a given string
#include<bits/stdc++.h>
using namespace std;


bool oneDigit(int *num){
    if(*num < 0){
        cout<<"the number is less than 0 "<<endl;
        return true;
    }
    else if(*num >= 0 && (*num)/10 > 10){
        cout<<(*num)/10<<"the number is greater than 0 "<<endl;
        return true;
    }
    else{
        return false;
    }
    return false;
}


int ret(int *num){
    if(*num > 0){
        *num = *num+1;
    }
    return *num;
}

// Driver program
int main(){
    string str = "nitin";
    int a = 123;
    cout<<"ret "<<ret(&a)<<endl;    // output 124
    //int x = 1;
    cout<<"mod of 1 is "<<1%10<<"   1/10 is "<<1/10<<endl;    //output   mod of 1%10 is 1   1/10 is 0
    cout<<oneDigit(&a)<<endl;
    
    return 0;
}
