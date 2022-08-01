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

//this solution is using recursion.
int searchNodeData(Node* root, int key){
    int temp;
    if(root == NULL){
        //cout<<"not found "<<endl;
        return 0;
    }
    else{
        if(key == root->data){
            return 1;
        }
        else{
            temp = searchNodeData(root->left, key);
            if(temp != 0)
                return temp;
            else return searchNodeData(root->right, key);
        }
    }
    return 0;
}
//Time Complexity: O(n). Space Complexity: O(n).


int main() {
    
    //Node* NewRoot = NULL;
    Node* root = new Node(2);
    root->left = new Node(7);
    root->right = new Node(5);
    root->left->right = new Node(6);
    root->left->right->left = new Node(1);
    root->left->right->right = new Node(11);
    root->right->right = new Node(9);
    root->right->right->left = new Node(4);
 
    // Function call
    cout<<"search "<<searchNodeData(root, 11)<<endl;
    return 0;
}
