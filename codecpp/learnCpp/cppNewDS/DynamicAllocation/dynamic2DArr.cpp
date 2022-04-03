#include <iostream>
using namespace std;

int main() {

    int row;
    cin >> row;

    int col;
    cin >> col;

    //creating a 2D array DYNAMICALLY IN HEAP MEMORY WHICH IS EVERY 'N' ROWs IS POINTING TO NEW POINTER TYPE ARRAY OF SIZE 'M'.

    /*    
        int** arr = new int*[row]; =====>>>  is 'row' times the new array associated to each 'row' pointer having size m


                                COLUMNS .....................of m size

|ROW 1|  ---- int* arr = new int[m]--->|_______|_______|_______|_______|   

|ROW 2|  ---- int* arr = new int[m]--->|_______|_______|_______|_______|
    
|ROW 3|  ---- int* arr = new int[m]--->|_______|_______|_______|_______|

|ROW 4|  ---- int* arr = new int[m]--->|_______|_______|_______|_______|
       
|ROW 5|  ---- int* arr = new int[m]--->|_______|_______|_______|_______|

|ROW 6|  ---- int* arr = new int[m]--->|_______|_______|_______|_______|

   .    .........................................
   .    .........................................
   .
|ROW N|  ---- int* arr = new int[m]--->|_______|_______|_______|_______|


And the whole Representation is of Dynamic 2D Array is   ======>>>>>>   int** arr = new int*[row];

*/


    int** arr = new int*[row];
    for(int i=0; i<row; i++) {
        arr[i] = new int[col];
    }

    //taking input
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    //taking output
    cout << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }


    //releasing memory from heap because it not release automatically 
    //we need to delete it from manually from the heap which is dynamically allocated from me
    //otherwise it not deletes and consume memory
    for(int i=0; i<row; i++) {
        delete [] arr[i];
    }   


    //releasing memory from heap because it not release automatically 
    //we need to delete it from manually from the heap which is dynamically allocated from me
    //otherwise it not deletes and consume memory
    delete []arr;

    //how to create a 2D array dynamically
    //input/Output
    //memory free kaise karani hai 

    return 0;
}
