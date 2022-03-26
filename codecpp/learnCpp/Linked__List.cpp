
// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

int main() {
    Node *head;
    Node *one  = NULL;
    Node *two  = NULL;
    Node *three  = NULL;
    one = new Node();
    two = new Node();
    three = new Node();
    
    one->data = 2;
    one->next = two;
    
    two->data = 3;
    two->next = three;
    
    three->data = 4;
    three->next = NULL;
    
    head = one;
    while(head != NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
    
    return 0;
}