#include <bits/stdc++.h>
using namespace std;

int main () {

    int arr[10] = {23, 122, 41, 67};

   
    cout <<" address of first memory block is " << arr << endl;
    cout << "value at 0 index "<<arr[0] << endl;
    cout <<" address of first memory block is " << &arr[0] << endl;
    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr + 1) << endl;
    cout << "7th " << *(arr) + 1 << endl;
    cout << "8th " << arr[2] << endl;
    cout << "9th " << *(arr+2) << endl;
    cout<<endl;

    int i = 3;
    cout << "i[arr] is equavalent to arr[i] = "<<i[arr] <<" is equavalent to "<<arr[i]<< endl;
    cout << "*(arr + i) is equavalent to *(i + arr) = "<<*(arr + i) <<" is equavalent to "<<*(i + arr)<< endl;

    //arr[i] = *(arr + i);               //formula for at any index
	//i[arr] = *(i + arr);

    cout<<endl;

   int temp[] = {1,2};
   cout <<"sizeof(temp) "<<sizeof(temp) << endl;
   cout << " sizeof(*temp)  " <<  sizeof(*temp) << endl;
   cout << " sizeof(&temp) " <<  sizeof(&temp) << endl;
   cout<<endl;

   int *ptr1 = &temp[0];
   cout << "sizeof(ptr1) " <<sizeof(ptr1) << endl ;
   cout << "sizeof(*ptr1) "<<sizeof(*ptr1) << endl ;
   cout << "sizeof(&ptr1) "<<sizeof(&ptr1) << endl ;
   cout<<endl;

   int a[20] = {1,2,3,5};
   cout<<"address of array 'a' is  '&a[0] = &a = a'  is same "<<endl;
   cout << "address of array 'a' is &a[0] = " << &a[0] << endl;
   cout << "address of array 'a' is &a    = " << &a << endl;
   cout << "address of array 'a' is a     = " << a << endl;
   cout<<endl;

   int *p = &a[0];
   cout << p << endl;
   cout << *p << endl;
   cout << "-> " << &p << endl;
   cout<<endl;

   int arx[10];
//ERROR
   //arr = arr+1;

    int *ptr2 = &arx[0];
    cout << "address of &arx[0] = "<<ptr2 << endl;
    ptr2 = ptr2 + 1;
    cout << "address of &arx[0] after increment ++ is = "<<ptr2 << endl;

    return  0;
}
