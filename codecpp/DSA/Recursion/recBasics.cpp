#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;


//factorial of number n
int factorial(int n){
    if(n==0)
        return 1;
    
    return n*factorial(n-1);
    
    
//power of 2
int power(int n){
    if(n==0)
        return 1;
    
    return 2*power(n-1);

    
//print n numbers
void print(int n){
    if(n==0)
        return ;
    
    cout<<n<<endl;   //tail recursion prints reverse order like when n == 5  O/P 5 4 3 2 1
    
    print(n-1);
    
    cout<<n<<endl;   //head recursion prints like when n == 5  O/P 1 2 3 4 5
    

//reach home problem from source to destination from love babbar (recursion => 1 case ke liye solve kro baaki recursion sambhal lega (till base case) );
void reachHome(int src, int dest){
    cout<<"source "<<src<<" destination "<<dest<<endl;
    //base case
    if(src==dest){
        cout<<"pahuch gya "<<endl;
        return ;
    }
    
    //processing 1 step
    src++;
    reachHome(src, dest);
    
    
//fibonacci number at input index return value at that index of fibonacci number
int fib(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fib(n-1) + fib(n-2);
    
    
    
