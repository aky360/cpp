#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int size;
    int *arr;
    int top;
    
    Stack(int size){
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
    }
    
    void push(int data){
        if(size - top > 1){
            top++;
            arr[top] = data;
        }
        else{
            cout << "Stack OverFlow" << endl;
        }
    }
    
    void pop() {
        if(top >=0 ) {
            top--;
        }
        else{
            cout << "Stack UnderFlow" << endl;
        }
    }
    
};
