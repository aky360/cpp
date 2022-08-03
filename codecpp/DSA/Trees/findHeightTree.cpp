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


int height(Node* root){
        //base case
        if(root == NULL) {
            return 0;
        }
        
        int left = height(root ->left);
        int right = height(root->right);
        
        int ans = max(left, right) + 1;
        return ans;
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
//         6    9
//       / \   /
//      1  11 4
//             \
//              8
    
    // Function call
    cout << "height " << height(root) << endl;
    return 0;
}
