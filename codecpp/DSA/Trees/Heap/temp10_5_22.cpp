// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;

class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        //int arr[0] = -1;
        int size = 0;
    }
    
    void insert(int data){
        size = size +1;
        int index = size;
        arr[index] = data;
        
        while(index>1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            } 
            else{
                return ;
            }
        }
    }
    
    void heapify(int arr[], int n, int i){
        int largest = i;
        int left  = 2*i+1;
        int right = 2*i + 2;
        
        if(left < n && arr[largest] < arr[left]){
            largest = left;
        }
        if(right < n && arr[largest] < arr[right]){
            largest = right;
        }
        if(largest != i){
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }
};


int main()
{
    Heap h;
    int a[5] = {54, 53, 55, 52, 50};
    int n = 4;
    for(int i=n/2;i>0;i--){
        h.heapify(a, n, i);
    }
    for(int j = 1;j<=n;j++){
        cout<<a[j]<<" ";
    }
   
    return 0;
}

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    public:
    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* createTree(Node* &root){
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data); 
    if(root->data == -1){
        return NULL;
    }
    // cout<<rot->data<<rot->left->data<<rot->right->data<<endl;
    // int data;
    // cin>>data;
    cout<<"enter the data into the left of tree ";
    root->left = createTree(root->left);
    cout<<"enter the data into the right of tree ";
    root->right = createTree(root->right);
    return root;
}

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here){
            max_so_far = max_ending_here;
            cout<<i<<" ";
        }
            
 
        if (max_ending_here < 0){
            max_ending_here = 0;
            cout<<i<<" "<<endl;
        }
    }
    return max_so_far;
}
 
/*Driver program to test maxSubArraySum*/
// int main()
// {
//     int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
//     int n = sizeof(a)/sizeof(a[0]);
//     int max_sum = maxSubArraySum(a, n);
//     cout << "Maximum contiguous sum is " << max_sum;
//     //Node* root = NULL;
//     cout<<"data of tree "<<endl;
//     Node* root = NULL;
//     //createTree(root);
//     cout<<"absolute "<<abs(5/3)<<endl;
//     return 0;
// }


int maxSum(int* arr, int n){
    int max_so_far = INT_MIN;
    int max_ending_here =0;
    for(int i = 0;i<n;i++){
        max_ending_here = max_ending_here +arr[i];
        if(max_so_far < max_ending_here){
            max_so_far = max_ending_here;
        }
        if(max_ending_here < 0){
            max_ending_here = 0;
        }
    }
    return max_so_far;
}
