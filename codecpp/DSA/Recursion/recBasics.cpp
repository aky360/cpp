#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;


int factorial(int n){
    if(n==0)
        return 1;
    
    return n*factorial(n-1);
    
