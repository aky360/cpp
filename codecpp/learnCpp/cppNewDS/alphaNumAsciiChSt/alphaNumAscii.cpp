// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int alphaNumSm(char a){
    int x = a-'a'+1;
    cout<<"alphabet numbers of "<<a<<" is "<<x;
    return x;       // return (int)a-'a'+1;
}

int alphaNumCap(char a){
    int x = a-'A'+1;
    cout<<"alphabet numbers of "<<a<<" is "<<x;
    return x;    // return (int)a-'A'+1;
}

int convertToAscii(char a){
    int x = (int)a;
    cout<<"convert to ascii number "<<x;
    return x;   // return (int)a;
}

int numConv(char a){
    int x = a-'0'+1;
    cout<<"num convert " <<x;
    return x;   // return (int)a-'0'+1;
}

int numAscii(char a){
    int x = a;
    cout<<"numAscii " <<x;
    return x;   // return (int)a;
}


int main() {
    
    cout<<"small char in ASCII of a is "<<(int)'a'<<endl;
    cout<<"capital char in ASCII of A is "<<(int)'A'<<endl;
    cout<<"num in ASCII of 0 is "<<(int)'0'<<endl;
   
    alphaNumSm('b');
    cout<<endl;
    alphaNumCap('X');
    cout<<endl;
    convertToAscii('z');
    cout<<endl;
    /*numConv('9');
    cout<<endl;
    numAscii('0');*/
    return 0;
}
