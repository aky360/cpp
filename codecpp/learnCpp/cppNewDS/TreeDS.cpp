#include <bits/stdc++.h>
using namespace std;


class BinaryTreeNode{
public:
	int data;
	BinaryTreeNode *left;
	BinaryTreeNode *right;

	BinaryTreeNode(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

BinaryTreeNode* buildTree(BinaryTreeNode* root){
	cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new BinaryTreeNode(data);    

    if(data == -1) {
        return NULL;
    } 

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;

}


int main(){

	BinaryTreeNode* root = NULL;
	root = buildTree(root);

	return 0;
}