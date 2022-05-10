class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        int arr[0] = -1;
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
};
