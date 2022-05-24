// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

//this is function of checking the nested loop what will happend when the break keyword in nested for loop; in this case break keyword breaks the inner loop and pointer goes to the outer loop then again the program execution starts from the outer loop  

void functin(){
    int j = 1;
    for(int i =0;i<7;i++){
        while(i>j){
            cout<<"i "<<i<<" ";
            cout<<"j "<<j<<endl;
            j++;
            cout<<"j "<<j<<endl;
            if(j>i){
                break;
            }
            break;
        }
    }
}
int main() {
    // Write C++ code here
    int i = 1, j=1;
    //cout << "Hello world!";
    if(i>j){
        cout<<"this i "<<i<<endl;
    }
    
    functin();

    return 0;
}
