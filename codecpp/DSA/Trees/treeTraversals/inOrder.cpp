
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void inOrder(Node* root){
    Node* temp = root;
    Node* curr = NULL;
    stack<Node *> stk;
    
    while(temp != NULL || stk.empty() == false){
        
        while(temp != NULL){
            stk.push(temp);
            temp = temp->left;
        }
        temp = stk.top();
        stk.pop();
        cout<<temp->data<<endl;
        
        temp =temp->right;
    }
}

int main(){
    /* Constructed binary tree is
              1
            /   \
          2      3
        /  \
      4     5
    */
    Node *root = new Node(1);
    root->left        = new Node(2);
    root->right       = new Node(3);
    root->left->left  = new Node(4);
    root->left->right = new Node(5);
  
    inOrder(root);
    return 0;
}
