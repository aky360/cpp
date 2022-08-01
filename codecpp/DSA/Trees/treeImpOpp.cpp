#include<bits/stdc++.h> 
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

int height(node* root){
        //base case
        if(root == NULL) {
            return 0;
        }
        
        int left = height(root ->left);
        int right = height(root->right);
        
        int ans = max(left, right) + 1;
        return ans;
    }

node* buildTree(node* &root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}

pair<int,int> diameterFast(node* root) {
        //base case
        if(root == NULL) {
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int,int> left = diameterFast(root->left);
        pair<int,int> right = diameterFast(root->right);
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;
        
        pair<int,int> ans;
        ans.first = max(op1, max(op2, op3));;
        ans.second = max(left.second , right.second) + 1;

        return ans;
    }
    
int diameter(node* root) {
    return diameterFast(root).first;
}

int main() {
    // Write C++ code here
    node* root = NULL;
    buildTree(root);
   inorder(root);
   cout<<endl;
   cout<<"height "<<height(root)<<endl;
   cout<<"diameter "<<diameter(root);
    return 0;
}
