#include <bits/stdc++.h>
#define MOD 1000000007


void reverseStr(string &str, int i, int j){
    if(i>j){
        return ;
    }
    swap(str[i], str[j]);
    i++;
    j--;
    return reverseStr(str, i, j);
}


int main() {

    string name = "abcde";
    cout << endl;
    reverseStr(name, 0 , name.length()-1 );
    cout << endl;
    cout << name << endl;

    return 0;
}
