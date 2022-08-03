#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *left, *right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void inOrdRec(Node* root){
    if(root == NULL){
        return ;
    }
    
    inOrdRec(root->left);
    cout<<root->data<<" ";
    inOrdRec(root->right);
}

void preOrdRec(Node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    preOrdRec(root->left);
    preOrdRec(root->right);
}

void postOrdRec(Node* root){
    if(root == NULL){
        return ;
    }
    
    postOrdRec(root->left);
    postOrdRec(root->right);
    cout<<root->data<<" ";
}


int main() {
    Node* NewRoot = NULL;
    Node* root = new Node(2);
    root->left = new Node(7);
    root->right = new Node(5);
    root->left->right = new Node(6);
    root->left->right->left = new Node(1);
    root->left->right->right = new Node(11);
    root->right->right = new Node(9);
    root->right->right->left = new Node(4);
    root->right->right->left->right = new Node(8);
//          2
//        /  \
//       7    5
//        \    \
//        6     9 
//       / \   /
//      1  11 4
//             \
//              8
    inOrdRec(root);
    cout<<endl;
    preOrdRec(root);
    cout<<endl;
    postOrdRec(root);
    return 0;
}
