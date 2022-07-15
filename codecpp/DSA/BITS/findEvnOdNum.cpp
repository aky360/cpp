#include <bits/stdc++.h>
using namespace std;

string findEvenOdd(int number){
    if(number & 1){
        return "Odd";
    }
    return "Even";
}

int main() {
    cout<<findEvenOdd(113430);
    cout<<findEvenOdd(11343);
    return 0;
}
